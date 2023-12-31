// Exercise Question :find the sum of digits of a number using a function
#include <stdio.h>
void sum(int);
void sum(int n){
    int i=0;
    while(n>0){
        i=i+n%10;
        n=n/10;
    }
    printf("Sum of digit is :%d",n,i);
}
int main(){
    int n,i;
    printf("Enter any number :");
    scanf("%d",&n);
    sum(n);
}