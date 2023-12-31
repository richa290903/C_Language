// Exercise Question :check if a number is prime using a function
#include <stdio.h>
void prime(int);
void prime(int n){
    int i,flag=0;
    for(i=1;i<=n;i++){  
        if(n%i==0){     
            flag++;     
        }
    }
    if(flag==2){
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");
    }
    
}
int main(){
    int n,flag;
    printf("Enter any number :");
    scanf("%d",&n);
    prime(n);
    
}