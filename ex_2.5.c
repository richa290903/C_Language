// Exercise Question :reverse a given number
#include <stdio.h>
void main(){
    int n,f,r=0;
    printf("Enter any number:");
    scanf("%d",&n);
    while(n>0){ //275>0         //27>0
        f=n%10;     //275%10=5      //27%10=7      
        r=r*10+f;   //0*10+5=5      //0*10+7=7
        n=n/10;     //275/10=27     //27/10=2
    }
    printf("Reverse number is: %d",r);
}