/** file stdlib.h
    'Standard library' functions, for whatever that means.
*/
#ifndef STDLIB_INCLUDE
#define STDLIB_INCLUDE

#include <types.h>

/** Causes normal program termination and the value of status is
    returned to the parent.
    All open streams are flushed and closed.
*/
void exit(int status) NONBANKED;

#if 0
/** Compatibility function.  Not implemented.
 */
int getkey(void) BANKED;
#endif

/** Returns the absolute value of a int.
    If i is negative, returns -i; else returns i.
*/
int abs(int i) BANKED;
/** Returns the absolute value of a long.
 */
long labs(long num) BANKED;
/** Converts an ASCII string to an int.
    The string may be of the format [\s]*[+-][\d]+[\D]* i.e. any number
    of spaces, an optional + or -, then an arbitrary number of digits.
    The result is undefined if the number doesnt fit in an int.
 */
int atoi(const char *s) NONBANKED;
/** Converts an ASCII string to a long.
 */
long atol(const char *s) NONBANKED;
/** Converts an int into a base 10 ASCII string.
    Banked as it assumes that the destination is in non-banked RAM.
 */
char *itoa(int n, char *s) BANKED;
/** Converts a long into a base 10 ASCII string.
    Banked as it assumes that the destination is in non-banked RAM.
 */
char *ltoa(long n, char *s) BANKED;

#endif
