#include "cpp/php2cpp.h"


#ifndef APPROXGREEKLATIN_CPP
#define APPROXGREEKLATIN_CPP

#include "approxgreeklatin.h"

/*
 *
 * Copyright Alexander Beider and Stephen P. Morse, 2008
 *
 * This file is part of the Beider-Morse Phonetic Matching (BMPM) System. 
 * BMPM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * BMPM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with BMPM.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
/* ORIG: include_once */
#include "approxfrench.h"
approxGreeklatin = {{"N", "", "", ""}, {"approxfrench plus approxgreeklatin"}};
array_pop(approxFrench);
approxGreeklatin = array_merge(approxFrench, approxGreeklatin);
approx[LanguageIndex("greeklatin", languages)] = approxGreeklatin;

#else
#endif