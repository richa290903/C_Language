// Exercise Question :swap two numbers using a function
#include<stdio.h>
void swap(int,int);
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping.....");
    printf("\nA:%d",a);
    printf("\nB:%d",b);
}
int main(){
    int a,b;
    printf("Enter any two number:");
    scanf("%d %d",&a,&b);
    printf("Before swapping.....");
    printf("\nA:%d",a);
    printf("\nB:%d",b);
    swap(a,b);
}