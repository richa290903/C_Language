// Exercise Question : check if a number is prime or not for ex.2,3,5,7,11....
#include<stdio.h>
void main(){
    int n,i,flag=0;
    printf("Enter any number:");
    scanf("%d",&n); //5

    for(i=1;i<=n;i++){  //1<=5  //5<=5
        if(n%i==0){     //5%1==0    //5%5==0
            flag++;     //flag=1    //flag=2
        }
    }
    if(flag==2){ //2==2
        printf("It is prime number");
    }
    else{
        printf("It is not prime number");
    }
    
}