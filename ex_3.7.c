// Exercise Question :calculate the power of a number using a function
#include <stdio.h>
// #include <math.h>
// void main(){
//     int pw;
//     pw=pow(2,5);
//     printf("power :%d",pw);
// }
void power(int,int);
void power(int base,int exponents){
    int i,pw=1;
    for(i=1;i<=exponents;i++){
        pw=pw*base;
    }
    printf("Power is : %d ",pw);
}
int main(){
    int base,exponents;
    printf("Enter value of base :");
    scanf("%d",&base);
    printf("Enter value of exponents :");
    scanf("%d",&exponents);
    power(base,exponents);

}