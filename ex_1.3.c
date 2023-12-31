// Exercise Question :find the largest among three numbers.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter First number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is Max",a);
    }
    else if(b>c){
        printf("%d is Max",b);
    }
    else{
        printf("%d is Max",c);
    }
}