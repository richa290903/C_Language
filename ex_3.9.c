// Exercise Question :find the absolute value of a number using a function
#include <stdio.h>
void absolute(int);
void absolute(int n){
    if(n<0){    //12<0
        n=(-1)*n;   //-1*12=12
    }
    printf("Absolute value is :%d",n);
}
int main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    absolute(n);
}