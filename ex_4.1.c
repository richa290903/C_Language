// Exercise Question :find the sum of elements in an array
#include <stdio.h>
void main(){
    int a[10],i,sum=0;
    // printf("Enter how many nuber you want to print :");
    // scanf("%d",&n);
    for(i=0;i<=9;i++){
        printf("enter %d Number :",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum is :%d",sum);
}

