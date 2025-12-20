/*b. Write a function to find square root of a number.*/

#include<stdio.h>
#include<math.h>

//function declaration/prototype

float sqart(float num);

int main(){
    float num;
    printf("Enter a number to find it's square root: ");
    scanf("%f",&num);
    printf("The square root of %.2f is %.2f.\n",num, sqart(num));     //function call/actual parameter/argument
    return 0;
}

//funtion defintion
float sqart(float num){         //formal parameter
    return sqrt(num);
}