// Exercise Question :print the Fibonacci series
#include<stdio.h>
void main(){
    int n1,n2,s,n;
    printf("Enter number you want to dispaly :");
    scanf("%d",&n);
    n1=0;
    n2=1;
    s=n1+n2;
    printf("Enter the number of element : %d %d %d ",n1,n2,s); 

    while(s<=n){
        n1=n2;
        n2=s;
        s=n1+n2;
        printf(" %d ",s);
        
    }
}