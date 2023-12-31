// Exercise Question :calculate the LCM (Least Common Multiple) of two numbers
#include <stdio.h>
void main(){
    int n1,n2,max;
    printf("Enter any two number :");
    scanf("%d %d",&n1,&n2); //12 25
    max=(n1>n2)?n1:n2;  //12>25
    while(1){
        if(max%n1==0  && max%n2==0){    
            printf("The LCM of %d and %d is : %d",n1,n2,max);
            break;
        }
        max++;
    }
}
