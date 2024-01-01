// Exercise Question :find the sum of elements in an array
#include <stdio.h>
void main(){
    int n,a[100],i,sum=0;
    printf("Enter how many nuber you want to print :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter %d Number :",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum is :%d",sum);
}

