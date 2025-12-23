//b. Write a program to check if a number is prime or not.

#include<stdio.h>
#include<math.h>
int main(){
    int p,is_prime=1;
    printf("Write a number to check if it's a prime or not: ");
    scanf("%d",&p);

    if(p==1){
        is_prime = 0;
    }else{
        for(int i=2;i<=sqrt(p);i++){
            if (p % i == 0){
              is_prime = 0;
            }
        }
    }
    if(is_prime){
        printf("The number is prime number.\n");
    }else{
        printf("The number is not prime number.\n");
    }
}
