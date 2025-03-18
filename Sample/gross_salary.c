// If his basic salary is less than Rs. 1500, then HRA = 10% of basic
// salary and DA = 90% of basic salary. If his salary is either equal to
// or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic
// salary. If the employee's salary is input through the keyboard write
// a program to find his gross salary.

#include <stdio.h>

int main()
{
    float bs, da, hra, gs;

    printf("Enter Employee Salary:");
    scanf("%f", &bs);

    if (bs < 1500)
    {
        da = bs * 0.90;
        hra = bs * 0.10;
    }
    else
    {
        da = bs * 0.98;
        hra = 500;
    }

    
    gs = bs + da + hra;

    printf("gross salary = Rs. %f", gs) ;

    return 0;
}