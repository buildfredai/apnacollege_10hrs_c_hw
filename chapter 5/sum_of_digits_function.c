/*a. Write a function to find sum of digits of a number.*/

#include<stdio.h>

//function declaration 
int sum(int num1, int num2);

int main(){
    int num1,num2;
    printf("Enter first number: ");     
    scanf("%d",&num1);
    printf("Enter second number: ");     
    scanf("%d",&num2);

    printf("Sum of %d and %d is %d.\n", num1,num2,sum(num1,num2));      //function call/actual parameter/argument/call by value
    return 0;
}

// function definition
int sum(int num1, int num2){        //caled function/formal parameter/paramter
    return num1+num2;       //return value
}