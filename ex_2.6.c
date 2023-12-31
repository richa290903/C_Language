// Exercise Question :check if a number is Armstrong or not
#include <stdio.h>
void main(){
    int n,f,sum=0,tmp;
    printf("Enter any number:");
    scanf("%d",&n);
    tmp=n;
    while(n>0){
        f=n%10;
        sum=sum+(f*f*f);
        n=n/10;
    }
    if(tmp==sum){
        printf("Number is armstrong number");
    }
    else{
        printf("Number is not armstrong number");
    }
}