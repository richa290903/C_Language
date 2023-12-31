// Exercise Question :find the factorial of a number using a loop
#include<stdio.h>
void main(){
    int n,i,factorial=1;
    printf("Enter any number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("Factorial is :%d",factorial);
}