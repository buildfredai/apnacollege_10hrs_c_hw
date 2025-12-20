#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter length of the rectangle: ");
    scanf("%d",&length);
    printf("Enter breadth of the rectangle: ");
    scanf("%d",&breadth);

    int perimeter = 2*(length + breadth);
    printf("Perimeter of %d and %d is %d.",length,breadth, perimeter);
    return 0;
}