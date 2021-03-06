#include "cpp/php2cpp.h"


#ifndef DMLAT_CPP
#define DMLAT_CPP

#include "dmlat.h"

/*
 *
 * Copyright Stephen P. Morse, 2005
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
firstLetter = 'a';
lastLetter = 'z';
vowels = "aeioujy";
newrules = {
    {"schtsch", "2", "4", "4"},
    {"schtsh", "2", "4", "4"},
    {"schtch", "2", "4", "4"},
    {"shtch", "2", "4", "4"},
    {"shtsh", "2", "4", "4"},
    {"stsch", "2", "4", "4"},
    {"ttsch", "4", "4", "4"},
    {"zhdzh", "2", "4", "4"},
    {"shch", "2", "4", "4"},
    {"scht", "2", "43", "43"},
    {"schd", "2", "43", "43"},
    {"stch", "2", "4", "4"},
    {"strz", "2", "4", "4"},
    {"strs", "2", "4", "4"},
    {"stsh", "2", "4", "4"},
    {"szcz", "2", "4", "4"},
    {"szcs", "2", "4", "4"},
    {"ttch", "4", "4", "4"},
    {"tsch", "4", "4", "4"},
    {"ttsz", "4", "4", "4"},
    {"zdzh", "2", "4", "4"},
    {"zsch", "4", "4", "4"},
    {"chs", "5", "54", "54"},
    {"csz", "4", "4", "4"},
    {"czs", "4", "4", "4"},
    {"drz", "4", "4", "4"},
    {"drs", "4", "4", "4"},
    {"dsh", "4", "4", "4"},
    {"dsz", "4", "4", "4"},
    {"dzh", "4", "4", "4"},
    {"dzs", "4", "4", "4"},
    {"sch", "4", "4", "4"},
    {"sht", "2", "43", "43"},
    {"szt", "2", "43", "43"},
    {"shd", "2", "43", "43"},
    {"szd", "2", "43", "43"},
    {"tch", "4", "4", "4"},
    {"trz", "4", "4", "4"},
    {"trs", "4", "4", "4"},
    {"tsh", "4", "4", "4"},
    {"tts", "4", "4", "4"},
    {"ttz", "4", "4", "4"},
    {"tzs", "4", "4", "4"},
    {"tsz", "4", "4", "4"},
    {"zdz", "2", "4", "4"},
    {"zhd", "2", "43", "43"},
    {"zsh", "4", "4", "4"},
    {"ai", "0", "1", "999"},
    {"aj", "0", "1", "999"},
    {"ay", "0", "1", "999"},
    {"au", "0", "7", "999"},
    {"cz", "4", "4", "4"},
    {"cs", "4", "4", "4"},
    {"ds", "4", "4", "4"},
    {"dz", "4", "4", "4"},
    {"dt", "3", "3", "3"},
    {"ei", "0", "1", "999"},
    {"ej", "0", "1", "999"},
    {"ey", "0", "1", "999"},
    {"eu", "1", "1", "999"},
    {"ia", "1", "999", "999"},
    {"ie", "1", "999", "999"},
    {"io", "1", "999", "999"},
    {"iu", "1", "999", "999"},
    {"ks", "5", "54", "54"},
    {"kh", "5", "5", "5"},
    {"mn", "66", "66", "66"},
    {"nm", "66", "66", "66"},
    {"oi", "0", "1", "999"},
    {"oj", "0", "1", "999"},
    {"oy", "0", "1", "999"},
    {"pf", "7", "7", "7"},
    {"ph", "7", "7", "7"},
    {"sh", "4", "4", "4"},
    {"sc", "2", "4", "4"},
    {"st", "2", "43", "43"},
    {"sd", "2", "43", "43"},
    {"sz", "4", "4", "4"},
    {"th", "3", "3", "3"},
    {"ts", "4", "4", "4"},
    {"tc", "4", "4", "4"},
    {"tz", "4", "4", "4"},
    {"ui", "0", "1", "999"},
    {"uj", "0", "1", "999"},
    {"uy", "0", "1", "999"},
    {"ue", "0", "1", "999"},
    {"zd", "2", "43", "43"},
    {"zh", "4", "4", "4"},
    {"zs", "4", "4", "4"},
    {"rz", "4", "4", "4"},
    {"ch", "5", "5", "5"},
    {"ck", "5", "5", "5"},
    //array("rs", "4", "4", "4"),
    {"fb", "7", "7", "7"},
    {"a", "0", "999", "999"},
    {"b", "7", "7", "7"},
    {"d", "3", "3", "3"},
    {"e", "0", "999", "999"},
    {"f", "7", "7", "7"},
    {"g", "5", "5", "5"},
    {"h", "5", "5", "999"},
    {"i", "0", "999", "999"},
    {"k", "5", "5", "5"},
    {"l", "8", "8", "8"},
    {"m", "6", "6", "6"},
    {"n", "6", "6", "6"},
    {"o", "0", "999", "999"},
    {"p", "7", "7", "7"},
    {"q", "5", "5", "5"},
    {"r", "9", "9", "9"},
    {"s", "4", "4", "4"},
    {"t", "3", "3", "3"},
    {"u", "0", "999", "999"},
    {"v", "7", "7", "7"},
    {"w", "7", "7", "7"},
    {"x", "5", "54", "54"},
    {"y", "1", "999", "999"},
    {"z", "4", "4", "4"},
    {"c", "5", "5", "5"},
    {"j", "1", "999", "999"},
};
// Now branching cases
xnewrules = {
    {"rz", "94", "94", "94"},
    {"ch", "4", "4", "4"},
    {"ck", "45", "45", "45"},
    //array("rs", "94", "94", "94"),
    {"c", "4", "4", "4"},
    {"j", "4", "4", "4"},
};
xnewruleslist = "!rz!ch!ck!c!!j!";
// temporarily remove rs
//$xnewruleslist = "!rz!ch!ck!rs!c!!j!";

#else
#endif