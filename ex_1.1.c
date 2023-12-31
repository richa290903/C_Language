// Exercise Question : check whether a number is even or odd

#include<stdio.h>
void main()
{
    // code goes here :
    int n;
    printf("Enter any number:");
    scanf("%d",&n);

    if(n%2==0){
        printf("%d Number is even",n);
    }
    else{
        printf("%d Number is Odd",n);
    }
}