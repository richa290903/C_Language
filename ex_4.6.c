// Exercise Question :find the frequency of an element in an array
#include <stdio.h>
void main(){
    int a[10],n1,i,t=0;
    printf("Enter elements....");
    for(i=0;i<9;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number for find frequency :");
    scanf("%d",&n1);
    for(i=0;i<9;i++){   
        if(a[i]==n1){
            t++;
        }
    }
    printf("\n %d number frequency is : %d",n1,t);
}