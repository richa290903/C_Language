// Exercise Question :find the largest element in an array
#include <stdio.h>
void main(){
    int a[5],i,max;
    for(i=0;i<5;i++){
        printf("Enter %d number :",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("Largest number is :%d",max);
}