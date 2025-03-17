#include <stdio.h>


// The allowable range for integer constants is -32768 to 32767 - 32bit
int main(){

    int number = 32768;
    int negative_number = -32769;
    int positive_number = +1099;

    printf("Number = %i\n",number);
    printf("Negative Number = %i\n",negative_number);
    printf("Positive Number = %i\n",positive_number);

    return 0; // Return 0 for successful execution
    
}