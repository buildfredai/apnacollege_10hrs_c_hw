#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>0){
        printf("The number is natural number.\n");
    }
    else{
        printf("The number is not natural number.\n");
    }
    return 0;
}
