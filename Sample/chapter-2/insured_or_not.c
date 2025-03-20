// A company insures its drivers in the following
// cases:
// If the driver is married.
// If the driver is unmarried, male & above 30 years of age.
// If the driver is unmarried, female & above 25 years of age.
// In all other cases the driver is not insured. If the marital status, sex
// and age of the driver are the inputs, write a program to determine
// whether the driver is to be insured or not.

#include <stdio.h>

int main()
{
    char sex, marital_status;
    int age;

    printf("Enter Driver age, sex, marital_status");
    scanf("%d %c %c", &age, &sex, &marital_status);

    if (marital_status == 'M')
    {
        printf("Driver is insured!");
    }
    else
    {
        if (sex == 'M' && age > 30 || sex == 'F' && age > 25){
            printf("Driver is insured!");
        }
        else{
            printf("Driver is not insured!");
        }
    }

    return 0;
}