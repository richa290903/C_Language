// Exercise Question :print the multiplication table of a number
#include <stdio.h>
void main(){
    int n,i,multi;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        multi=n*i;
        printf("\n%d * %d = %d",n,i,multi);
    }
}