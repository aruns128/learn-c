#include <stdio.h>


int main() { // in standard C main will retrun always int.
    char name[50];  // Declare a character array to store the name

    printf("Enter your name: "); // Prompt user for input
    scanf("%49s", name);  // Read input (limiting input to avoid buffer overflow)

    printf("Hello, %s!\n", name);  // Print the name

    return 0;
}
