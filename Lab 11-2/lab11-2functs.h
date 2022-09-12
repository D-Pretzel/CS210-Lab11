/** lab11-2functs.h
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 11
* Purpose: Header file for lab11-2
* ===========================================================
*/

#define CHAR_IS_VOWEL 0
#define CHAR_IS_CONSONANT 1
#define CHAR_IS_OTHER 2
#define MAGIC_CHAR '@'

bool isFirstHalfAlpha(char theChar);

int typeOfChar(char theChar);

bool isMagicChar(char theChar);