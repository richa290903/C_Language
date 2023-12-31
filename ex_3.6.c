// Exercise Question :calculate the LCM of two numbers using a function
#include <stdio.h>
void lcm(int,int);
void lcm(int n1,int n2){
    int max;
    max=(n1>n2)?n1:n2;
    while (1)
    {
        if(max%n1==0 && max%n2==0){
            printf("Least Common Multiple of two values %d and %d is :%d",n1,n2,max);
            break;
        }
        max++;
    }
    
}
int main(){
    int n1,n2;
    printf("Enter any two number :");
    scanf("%d %d",&n1,&n2);
    lcm(n1,n2);
}