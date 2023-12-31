// Exercise Question :find the factorial of a number
#include<stdio.h>
void main(){
    int n,factorial=1,i;
    printf("Enter any number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){  //i<=5
        factorial=factorial*i; //24*5
    }
    printf("Factorial is : %d",factorial);
}