// Exercise Question : calculate the sum of natural numbers up to a given limit
#include<stdio.h>
void main(){
    int n,i,sum;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum :%d",sum);
}