// Exercise Question :calculate the square root of a number using a function
#include <stdio.h>
void squares(float);
void squares(float n){
    int i;
    float x;
    x=n;
    for(i=0;i<=n;i++){
        x=(x+n/x)/2;    //(4+4/4)/2=2.5     //(2.5+4/2.5)/2=2.05    //(2.05+4)/2=2.006      //(2.006+4/2.006)/2=2
                        //4+1/2=2.5
    }
    printf("The squre root of number %f :%f",n,x);
}
int main(){
    float n;
    printf("Enter any number :");
    scanf("%f",&n);
    squares(n);
}