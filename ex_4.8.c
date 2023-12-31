// Exercise Question :find the second largest element in an array
#include<stdio.h>
void main(){
    int a[5],i,max1,max2;
    printf("Enter Elements.....");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1]){  //1>2
        max1=a[0];  //max1=1
        max2=a[1];  //max=2
    }
    else{
        max1=a[1];  //max1=2
        max2=a[0];  //max2=1
    }
    for(i=2;i<5;i++){   
        if(a[i]>max1){  
            max2=max1;  
            max1=a[i];  
        }
        else if(a[i]>max2 && a[i]<max1){
            max2=a[i];
        }
    }
    printf("Maximum number is :%d",max2);
}