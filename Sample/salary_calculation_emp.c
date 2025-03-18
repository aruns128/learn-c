// The current year and the year in which the
// employee joined the organization are entered through the
// keyboard. If the number of years for which the employee has
// served the organization is greater than 3 then a bonus of Rs. 2500/-
// is given to the employee. If the years of service are not greater
// than 3, then the program should do nothing.

#include <stdio.h>


int main(){
    int current_year,doj_year;

    printf("Enter current year and doj year");
    scanf("%d %d",&current_year,&doj_year);

    if((current_year - doj_year) > 3){
        printf("your bonus is Rs. 2500");
    }

    return 0;
}