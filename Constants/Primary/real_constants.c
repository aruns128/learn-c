#include <stdio.h>


// The realconstants could be written in two forms— Fractional form and Exponential form.


// By default, %f prints floating-point numbers with six decimal places in C.
// If you want to control the number of decimal places, you can use %.nf, where n is the number of decimal places you want.


int main() {  // Use int main()
    printf("Fractional Form:\n");
    float decimal_number = 10.578;
    float decimal_negative_number = -10.556;
    float decimal_positive_number = +10.502;

    printf("Real Number = %.2f\n", decimal_number);
    printf("Decimal Negative Number = %.2f\n", decimal_negative_number);
    printf("Decimal Positive Number = %.2f\n", decimal_positive_number);

    printf("\nExponential Form:\n");
    float decimal_e_number = +3.2e-5;
    float decimal_e_negative_number = 4.1e8;
    float decimal_e_positive_number = -3.2e-5;

    // Use %e for scientific notation
    printf("Real Number = %e\n", decimal_e_number);
    printf("Decimal Negative Number = %e\n", decimal_e_negative_number);
    printf("Decimal Positive Number = %e\n", decimal_e_positive_number);

    return 0; // Return 0 for successful execution
}