// The marks obtained by a student in 5 different
// subjects are input through the keyboard. The student gets a
// division as per the following rules:

// Percentage above or equal to 60 - First division
// Percentage between 50 and 59 - Second division
// Percentage between 40 and 49 - Third division
// Percentage less than 40 - Fail

// Write a program to calculate the division obtained by the student.



#include <stdio.h>


int main(){

    int m1,m2,m3,m4,m5;

    printf("Enter mark for 5 subjects: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    int average;
    int total;

    total = m1+m2+m3+m4+m5;
    average = total/5;


    if(average >= 60){
        printf("First division");
    }else if(50 <= average &&  average >= 59){
        printf("Second division");
    }else if(40 <= average &&  average >= 49){
        printf("Third division");
    }else if(average < 49){
        printf("Fail");
    }
    return 0;
}