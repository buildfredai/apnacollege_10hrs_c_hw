//d. Make your own pow function.
#include<stdio.h>

//function declaration/prototype
int pow(int num,int pow_value);

int main(){
    int num,pow_value;
    printf("Enter a number to find it's power: ");
    scanf("%d",&num);
    printf("enter the value of power: ");
    scanf("%d",&pow_value);
    printf("Power = %d.\n",pow(num,pow_value));     //argument/function call
}

//function definition
int pow(int num, int pow_value){        //formal parameter
    int result = 1;
    for(int i = 1; i<=pow_value;i++){
        result = result * num;
        
    }
    return result;
    
}