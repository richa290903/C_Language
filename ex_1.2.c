// Exercise Question :determine if a given year is a leap year or not. 
#include<stdio.h>
void main()
{
    int n;
    printf("Enter any year :");
    scanf("%d",&n);

    if(n%400==0){
        printf("It is leap year...");
    }
    else if(n%4==0){
        printf("It is leap year...");
    }
    else if (n%100==0){
        printf("It is not leap year...");
    }
    else{
        printf("It is not leap year...");
    }

    // if(n%4==0 && n%100!=0 || n%400==0){
    //     printf("%d It is leap year",n);
    // }
    // else{
    //     printf("%d It is not leap year",n);
    // }

}