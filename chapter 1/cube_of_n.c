//b. Take a number(n) from user & output its cube(n*n*n).

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to find it's cube: ");
    scanf("%d",&n);     //input

    int cube = n*n*n;       //arithmatic operator
    printf("Cube of %d is %d.\n", n, cube);
    return 0;
}