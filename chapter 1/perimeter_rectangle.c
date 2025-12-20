/*a. Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.*/

#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter length of the rectangle: ");
    scanf("%d",&length);        //input
    printf("Enter breadth of the rectangle: ");
    scanf("%d",&breadth);       //input

    int perimeter = 2*(length + breadth);       //arithmatic operator
    printf("Perimeter of %d and %d is %d.",length,breadth, perimeter);
    return 0;
}