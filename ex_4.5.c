// Exercise Question :check if an array is palindrome or not
// {3,6,0,6,3}=palindrome
// {1,2,3,4,5}=not palindrome
#include <stdio.h>
void main(){
    int a[5],i,j,flag=0;

    for(i=0;i<5;i++){
        printf("enter %d Number :",i);
        scanf("%d",&a[i]);
    }
    // end=a[5]-1;
    // while(start<end){
    //     if(a[start]!=a[end]){
    //         printf("Array is not palindrome");
    //         break;
    //     }
    //     start++;
    //     end--;
    // }
    //printf("Array is palindrome");
    for(i=0,j=a[5]-1;i<5/2,j>=5/2;i++,j--){
        if(a[i]!=a[j]){
            //printf("The array is not palindrome\n");
            flag=1;
            break;
        }
    }
    //printf("The array is palindrome");
    if(flag==1){
        printf("The array is palindrome");
    }
    else{
        printf("The array is not palindrome\n");
    }
}