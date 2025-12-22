/*a. Write a program to check if a given number is
Armstrong number or not.*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,count=0,temp,digit,sum = 0;
    printf("Enter a number to check if number is Armsrtrong: ");
    scanf("%d",&a);

    temp = a;

    if(temp==0){
        count = 1;
    }else{
        while(temp!=0){
            count ++;
            temp /= 10;
        }
    }
    temp = a;

    while(temp!=0){
        digit= temp%10;
        sum += pow(digit,count);
        temp /= 10;
    }

    if ( sum == a){
        printf("The given number is armstrong number.\n");
    }
    else{
        printf("Fuckkk offfff!!!\n");
    }

    return 0;
}