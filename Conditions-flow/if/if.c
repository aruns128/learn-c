#include <stdio.h>

int main(){
    int number;

    printf("Enter your number:\n");
    scanf("%d",&number);

    if(number < 10){
        printf("the given number is less than 10!");
    }else{
        printf("the given number is greater than 10!");
    }
}