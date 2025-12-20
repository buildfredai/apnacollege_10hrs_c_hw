/*c. Write a function to print "Hot" or "Cold" depending
on the temperature user enters.*/

#include<stdio.h>

//function definition
void remark(int temperature);

int main(){
    int temperature;
    printf("Enter your area temperature(in celcius): ");
    scanf("%d",&temperature);
    remark(temperature);        //function call/argument
}

//function definition
void remark(int temperature){       //formal parameter
    if (temperature>50){
        printf("Where the fuck do you live???\n");
    }
    else if (temperature>30){
        printf("You're cooked bro!!\n");
    }
    else if(temperature>15){
        printf("Perfect temperature!!\n");
    }
    else if (temperature>5){
        printf("Wear jacket bro!!\n");
    }
    else if (temperature>0){
        printf("It's sooooo coldd mann!!\n");
    }
    else{
        printf("It's frezzing point!!\n");
    }
}