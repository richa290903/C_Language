// Exercise Question :merge two arrays into a third array
#include<stdio.h>
void main(){
    int a1[5],a2[5],i,k,merge[10];
    printf("First array.....\n");
    for(i=0;i<5;i++){
        printf("Enter %d element :",i);
        scanf("%d",&a1[i]);
        merge[i]=a1[i];     
    }
    k=i;
    printf("Second array.....\n");
    for(i=0;i<5;i++){
        printf("Enter %d element :",i);
        scanf("%d",&a2[i]);
        merge[k]=a2[i];
        k++;
    }
    printf("Third array.....\n");
    for(i=0;i<k;i++){
        printf(" %d ",merge[i]);
    }
}