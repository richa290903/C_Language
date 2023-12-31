// Exercise Question :print all prime numbers between two given numbers
#include <stdio.h>
void main(){
    int sn,en,i,j;
    printf("Enter starting number :");
    scanf("%d",&sn); 
    printf("Enter ending number :");
    scanf("%d",&en); 
    for(i=sn;i<=en;i++){ 
        for(j=2;j<=i;j++){ 
            if(i%j==0)  
                break;
        }
        if(i==j){ 
            printf(" %d ",j);
        }
    }
}