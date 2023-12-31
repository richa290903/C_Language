// Exercise Question :calculate the power of a number using a loop
#include <stdio.h>
void main(){
    int base,exponents,i,power=1;
    printf("Enter value of base :");
    scanf("%d",&base);  //2
    printf("Enter value of exponents :");
    scanf("%d",&exponents); //5
    for(i=1;i<=exponents;i++){  //1<=5  //2<=5      //3<=5      //4<=5      //5<=5
        power=power*base;    //1*2=2    //2*2=4     //4*2=8     //8*2=16    //16*2=32
    }
    printf("Power is: %d ",power);
}