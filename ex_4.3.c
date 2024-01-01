// Exercise Question :find the smallest element in an array
#include <stdio.h>
void main(){
    int a[5],i,min;
    for(i=0;i<5;i++){
        printf("Enter %d number :",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<5;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("Smallest number is :%d",min);

}