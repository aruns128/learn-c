#include <stdio.h>


// a) A character constant is a single alphabet, a single digit or a
// single special symbol enclosed within single inverted
// commas. Both the inverted commas should point to the left.
// For example, ’A’ is a valid character constant whereas ‘A’ is
// not.
// (b) The maximum length of a character constant can be 1
// character.

int main(){ 

    char alphabet = 'A';
    char digit = '0';
    char special_symbol = '$';

    printf("Alphabet=%c\n",alphabet);
    printf("Digit=%c\n",digit);
    printf("Special_symbol=%c\n",special_symbol);

    return 0;
}