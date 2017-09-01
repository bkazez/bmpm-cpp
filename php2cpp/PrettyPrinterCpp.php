<?php

require_once "vendor/autoload.php";

use PhpParser\PrettyPrinter;
use PhpParser\Node;
use PhpParser\Node\Expr;
use PhpParser\Node\Expr\AssignOp;
use PhpParser\Node\Expr\BinaryOp;
use PhpParser\Node\Expr\Cast;
use PhpParser\Node\Name;
use PhpParser\Node\Scalar;
use PhpParser\Node\Scalar\MagicConst;
use PhpParser\Node\Stmt;
use PhpParser\PrettyPrinterAbstract;

class PrettyPrinterCpp extends PrettyPrinter\Standard {
	protected function pExpr_Variable(Expr\Variable $node) {
		if ($node->name instanceof Expr) {
		    return '${' . $this->p($node->name) . '}'; // TODO
		} else {
			if ($node->name == 'this') {
				return 'this';
			} else {
			    return $node->name; // without $
			}
		}
	}

	// Class ivars
	protected function pStmt_PropertyProperty(Stmt\PropertyProperty $node) {
	    return $node->name // without $
	         . (null !== $node->default ? ' = ' . $this->p($node->default) : '');
	}

	protected function pClassCommon(Stmt\Class_ $node, $afterClassToken) {
		$flags = $this->pModifiers($node->flags);
	    return ($flags ? '/* ORIG: ' . $flags . ' */ ' : '') // not supported for C++ classes
	    . 'class' . $afterClassToken
	    . (null !== $node->extends ? ' : ' . $this->p($node->extends) : '')
	    . (!empty($node->implements) ? ' implements ' . $this->pCommaSeparated($node->implements) : '')
	    . "\n" . '{' . $this->pStmts($node->stmts) . "\n" . '}';
	}

	protected function pExpr_MethodCall(Expr\MethodCall $node) {
		$lhs = $this->pDereferenceLhs($node->var);
		$operator = '.';
		if ($lhs == 'this') {
			$operator = '->'; // this is a pointer in C++
		}
	    return $lhs . $operator . $this->pObjectProperty($node->name)
	         . '(' . $this->pMaybeMultiline($node->args) . ')';
	}

	protected function pExpr_Array(Expr\Array_ $node) {
	    return '{' . $this->pMaybeMultiline($node->items, true) . '}';
	}

	protected function pStmt_Echo(Stmt\Echo_ $node) {
	    return 'cout << ' . $this->pStreamSeparated($node->exprs) . ';';
	}

	protected function pStreamSeparated(array $nodes) {
	    return $this->pImplode($nodes, ' << ');
	}

	protected function pExpr_BinaryOp_Concat(BinaryOp\Concat $node) {
	    return $this->pInfixOp('Expr_BinaryOp_Concat', $node->left, ' + ', $node->right);
	}

	protected function pExpr_Include(Expr\Include_ $node) {
	    static $map = [
	        Expr\Include_::TYPE_INCLUDE      => 'include',
	        Expr\Include_::TYPE_INCLUDE_ONCE => 'include_once',
	        Expr\Include_::TYPE_REQUIRE      => 'require',
	        Expr\Include_::TYPE_REQUIRE_ONCE => 'require_once',
	    ];

	    $str = '';
	    if ($node->type == Expr\Include_::TYPE_INCLUDE_ONCE
	    	|| $node->type == Expr\Include_::TYPE_REQUIRE_ONCE) {
	    	$str .= '/* ORIG: ' . $map[$node->type] . " */\n";
	    }
	    $str .= "#include " . $this->pConvertExtension($this->p($node->expr), 'cpp');
	    return $str;
	}

	protected function pConvertExtension($pathInQuotes, $ext) {
		return preg_replace("/\.php\"$/", ".$ext\"", $pathInQuotes);
	}

	// TODO: Copy and paste of private methods so we have access

	protected function hasNodeWithComments(array $nodes) {
	    foreach ($nodes as $node) {
	        if ($node && $node->getAttribute('comments')) {
	            return true;
	        }
	    }
	    return false;
	}

	protected function pMaybeMultiline(array $nodes, $trailingComma = false) {
	    if (!$this->hasNodeWithComments($nodes)) {
	        return $this->pCommaSeparated($nodes);
	    } else {
	        return $this->pCommaSeparatedMultiline($nodes, $trailingComma) . "\n";
	    }
	}
}

?>