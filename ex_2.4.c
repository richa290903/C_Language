// Exercise Question :find the sum of digits of a number
#include <stdio.h>
void main(){
    int n,i=0;
    printf("Enter any number :");
    scanf("%d",&n);  
    while(n>0){   
        i=i+n%10;  
        n=n/10;    
    }
    printf("sum of digit :%d",i);
}