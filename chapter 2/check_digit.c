/*b. Write a program to check if given character is digit or not.*/

#include<stdio.h>
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);

    (a>='0' && a<'9')? printf("Digit\n"):printf("not digit\n");     
    //conditional oprator/ternary operator
    return 0;
    
}