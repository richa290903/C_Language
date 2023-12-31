// Exercise Question :find the GCD of two numbers using a function
#include <stdio.h>
void gcd(int,int);
void gcd(int n1,int n2){
    int i,gcd_num;
    for(i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd_num=i;
        }
    }
    printf("Greatest Common Divisor of two number %d and %d is: %d",n1,n2,gcd_num);
}
int main(){
    int n1,n2;
    printf("Enter any two number :");
    scanf("%d %d",&n1,&n2);
    gcd(n1,n2);
}