// Simply calculate simple interest for a set of values representing principle, number of years and rate of interest.


#include <stdio.h>

int main(){
    float simple_interest = 0;
    int principle = 0;
    int tenure = 0;
    int rate_of_interest = 0;

    printf("Enter your principle amount:");
    scanf("%d",&principle);

    printf("Enter your tenure:");
    scanf("%d",&tenure);

    printf("Enter your rate_of_interset:");
    scanf("%d",&rate_of_interest);

    simple_interest = (principle * tenure * rate_of_interest) / 100.0;

    printf("Simple Interest Amount is: %.2f\n",simple_interest);

    printf("Total Amount is: %.2f\n",simple_interest+principle);

    return 0;
}