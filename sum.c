#include<stdio.h>
void add(int,int);  //declare
void add(int a,int b){    //define
    int c;
    c=a+b;
    printf("Addition is :%d",c);
}
int main(){
    int a,b;
    printf("Enter value of two number :");
    scanf("%d %d",&a,&b);
    add(a,b);   //calling
}
// void main()
// {
//     int a,b,sum;

//     printf("Enter number 1:");
//     scanf("%d",&a);
//     printf("Enter number 2:");
//     scanf("%d",&b);

//     sum = a+b;

//     printf("Sum is %d .",sum);
// }