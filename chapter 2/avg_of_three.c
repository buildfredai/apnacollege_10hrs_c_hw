//a. Write a program to print the average of 3 numbers.

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter first number: ");
    scanf("%d",&num1);          //input
    printf("Enter second number: ");
    scanf("%d",&num2);          //input
    printf("Enter third number: ");
    scanf("%d",&num3);          //input

    int average = (num1+num2+num3)/3;       //arithmatic operator

    printf("Average of %d, %d and %d is %d.",num1,num2,num3,average);
    return 0;
}