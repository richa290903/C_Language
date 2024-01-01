// Exercise Question :reverse an array
#include <stdio.h>
void main(){
    int a[5],i,rev[5],j;
    for(i=0;i<5;i++){
        printf("Enter %d number :",i);
        scanf("%d",&a[i]);
    }
    j=0;
    for(i=5-1;i>=0;i--){    //5-1=4;4>=0;   //4-1=3;3>=0    //3-1=2;2>=0    //2-1=1;1>=0    //1-1=0;0>=0
        rev[j]=a[i];        //rev[0]=a[5]   //rev[1]=a[4]   //rev[2]=a[3]   //rev[3]=a[1]   //rev[4]=a[1]
        j++;                //0+1=1         //1+1=2         //2+1=3         //3+1=4         //4+1=5
    }
    printf("Reverse array is...\n");
    for(i=0;i<5;i++){
        printf(" %d ",rev[i]);
    }
}