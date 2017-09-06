#include "cpp/php2cpp.h"


#ifndef RULESPOLISH_CPP
#define RULESPOLISH_CPP

#include "rulespolish.h"

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
// Ashkenazic
rulesPolish = {
    // CONVERTING FEMININE TO MASCULINE
    {"ska", "", "$", "ski"},
    {"cka", "", "$", "tski"},
    {"lowa", "", "$", "(lova|lof|l|el)"},
    {"kowa", "", "$", "(kova|kof|k|ek)"},
    {"owa", "", "$", "(ova|of|)"},
    {"lowna", "", "$", "(lovna|levna|l|el)"},
    {"kowna", "", "$", "(kovna|k|ek)"},
    {"owna", "", "$", "(ovna|)"},
    {"lówna", "", "$", "(l|el)"},
    {"kówna", "", "$", "(k|ek)"},
    {"ówna", "", "$", ""},
    {"a", "", "$", "(a|i)"},
    // CONSONANTS
    {"czy", "", "", "tSi"},
    {"cze", "", "[bcdgkpstwzż]", "(tSe|tSF)"},
    {"ciewicz", "", "", "(tsevitS|tSevitS)"},
    {"siewicz", "", "", "(sevitS|SevitS)"},
    {"ziewicz", "", "", "(zevitS|ZevitS)"},
    {"riewicz", "", "", "rjevitS"},
    {"diewicz", "", "", "djevitS"},
    {"tiewicz", "", "", "tjevitS"},
    {"iewicz", "", "", "evitS"},
    {"ewicz", "", "", "evitS"},
    {"owicz", "", "", "ovitS"},
    {"icz", "", "", "itS"},
    {"cz", "", "", "tS"},
    {"ch", "", "", "x"},
    {"cia", "", "[bcdgkpstwzż]", "(tSB|tsB)"},
    {"cia", "", "", "(tSa|tsa)"},
    {"cią", "", "[bp]", "(tSom|tsom)"},
    {"cią", "", "", "(tSon|tson)"},
    {"cię", "", "[bp]", "(tSem|tsem)"},
    {"cię", "", "", "(tSen|tsen)"},
    {"cie", "", "[bcdgkpstwzż]", "(tSF|tsF)"},
    {"cie", "", "", "(tSe|tse)"},
    {"cio", "", "", "(tSo|tso)"},
    {"ciu", "", "", "(tSu|tsu)"},
    {"ci", "", "", "(tSi|tsI)"},
    {"ć", "", "", "(tS|ts)"},
    {"ssz", "", "", "S"},
    {"sz", "", "", "S"},
    {"sia", "", "[bcdgkpstwzż]", "(SB|sB|sja)"},
    {"sia", "", "", "(Sa|sja)"},
    {"sią", "", "[bp]", "(Som|som)"},
    {"sią", "", "", "(Son|son)"},
    {"się", "", "[bp]", "(Sem|sem)"},
    {"się", "", "", "(Sen|sen)"},
    {"sie", "", "[bcdgkpstwzż]", "(SF|sF|se)"},
    {"sie", "", "", "(Se|se)"},
    {"sio", "", "", "(So|so)"},
    {"siu", "", "", "(Su|sju)"},
    {"si", "", "", "(Si|sI)"},
    {"ś", "", "", "(S|s)"},
    {"zia", "", "[bcdgkpstwzż]", "(ZB|zB|zja)"},
    {"zia", "", "", "(Za|zja)"},
    {"zią", "", "[bp]", "(Zom|zom)"},
    {"zią", "", "", "(Zon|zon)"},
    {"zię", "", "[bp]", "(Zem|zem)"},
    {"zię", "", "", "(Zen|zen)"},
    {"zie", "", "[bcdgkpstwzż]", "(ZF|zF)"},
    {"zie", "", "", "(Ze|ze)"},
    {"zio", "", "", "(Zo|zo)"},
    {"ziu", "", "", "(Zu|zju)"},
    {"zi", "", "", "(Zi|zI)"},
    {"że", "", "[bcdgkpstwzż]", "(Ze|ZF)"},
    {"że", "", "[bcdgkpstwzż]", "(Ze|ZF|ze|zF)"},
    {"że", "", "", "Ze"},
    {"źe", "", "", "(Ze|ze)"},
    {"ży", "", "", "Zi"},
    {"źi", "", "", "(Zi|zi)"},
    {"ż", "", "", "Z"},
    {"ź", "", "", "(Z|z)"},
    {"rze", "t", "", "(Se|re)"},
    {"rze", "", "", "(Ze|re|rZe)"},
    {"rzy", "t", "", "(Si|ri)"},
    {"rzy", "", "", "(Zi|ri|rZi)"},
    {"rz", "t", "", "(S|r)"},
    {"rz", "", "", "(Z|r|rZ)"},
    {"lio", "", "", "(lo|le)"},
    {"ł", "", "", "l"},
    {"ń", "", "", "n"},
    {"qu", "", "", "k"},
    {"s", "", "s", ""},
    // VOWELS
    {"ó", "", "", "(u|o)"},
    {"ą", "", "[bp]", "om"},
    {"ę", "", "[bp]", "em"},
    {"ą", "", "", "on"},
    {"ę", "", "", "en"},
    {"ije", "", "", "je"},
    {"yje", "", "", "je"},
    {"iie", "", "", "je"},
    {"yie", "", "", "je"},
    {"iye", "", "", "je"},
    {"yye", "", "", "je"},
    {"ij", "", "[aou]", "j"},
    {"yj", "", "[aou]", "j"},
    {"ii", "", "[aou]", "j"},
    {"yi", "", "[aou]", "j"},
    {"iy", "", "[aou]", "j"},
    {"yy", "", "[aou]", "j"},
    {"rie", "", "", "rje"},
    {"die", "", "", "dje"},
    {"tie", "", "", "tje"},
    {"ie", "", "[bcdgkpstwzż]", "F"},
    {"ie", "", "", "e"},
    {"aue", "", "", "aue"},
    {"au", "", "", "au"},
    {"ei", "", "", "aj"},
    {"ey", "", "", "aj"},
    {"ej", "", "", "aj"},
    {"ai", "", "", "aj"},
    {"ay", "", "", "aj"},
    {"aj", "", "", "aj"},
    {"i", "[ou]", "", "j"},
    {"y", "[ou]", "", "j"},
    {"i", "", "[aou]", "j"},
    {"y", "", "[aeou]", "j"},
    {"a", "", "[bcdgkpstwzż]", "B"},
    {"e", "", "[bcdgkpstwzż]", "(E|F)"},
    {"o", "", "[bcćdgklłmnńrsśtwzźż]", "P"},
    // ALPHABET
    {"a", "", "", "a"},
    {"b", "", "", "b"},
    {"c", "", "", "ts"},
    {"d", "", "", "d"},
    {"e", "", "", "E"},
    {"f", "", "", "f"},
    {"g", "", "", "g"},
    {"h", "", "", "(h|x)"},
    {"i", "", "", "I"},
    {"j", "", "", "j"},
    {"k", "", "", "k"},
    {"l", "", "", "l"},
    {"m", "", "", "m"},
    {"n", "", "", "n"},
    {"o", "", "", "o"},
    {"p", "", "", "p"},
    {"q", "", "", "k"},
    {"r", "", "", "r"},
    {"s", "", "", "s"},
    {"t", "", "", "t"},
    {"u", "", "", "u"},
    {"v", "", "", "v"},
    {"w", "", "", "v"},
    {"x", "", "", "ks"},
    {"y", "", "", "I"},
    {"z", "", "", "z"},
    {"rulespolish"},
};
rules[LanguageIndex("polish", languages)] = rulesPolish;

#else
#endif