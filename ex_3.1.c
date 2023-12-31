// Exercise Question :find the factorial of a number using a function
// return_type function_name();  //declare
//function_name();   //calling
//return_type function_name(parameter list){      //define
//     function body
// }
#include <stdio.h>
void factorial(int);
void factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is :%d",n,fact);
}
int main(){
    int n;
    printf("Enter any value :");
    scanf("%d",&n);
    factorial(n);
}