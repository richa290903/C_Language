// Exercise Question : simple calculator program with options for addition, subtraction, multiplication, and division
#include<stdio.h>
void main(){
    int a,b,c,sign;

    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \nEnter number to perform operation(+,-,*,/): ");
    scanf("%d",&sign);
    switch(sign){
        case 1:
            c=a+b;
            printf("Addition of two number is:%d",c);
            break;
        case 2:
            c=a-b;
            printf("subtraction of two number is:%d",c);
            break;
        case 3:
            c=a*b;
            printf("Multiplication of two number is:%d",c);
            break;
        case 4:
            c=a/b;
            printf("Division of two number is:%d",c);
            break;
        default :
            printf("Invalid operator...");
    }

}