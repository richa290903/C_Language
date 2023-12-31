// Exercise Question :find the roots of a quadratic equation
//ax2+bx+c=0
// x<0 no roots
// x=0 equal roots
// x>0 two distinct roots

#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,x,r1,r2;
    printf("Enter First number :");
    scanf("%f %f %f",&a,&b,&c);
    x=b*b-(4*a*c);
    if(x<0){
        printf("Roots are not real");
    }
    if(x>0){
        printf("Both roots are different");
        r1=(-b-sqrt(x))/(2*a);
        r2=(-b+sqrt(x))/(2*a);
        printf("\nRoots are : %f %f",r1,r2);
    }
    else if(x==0){
        printf(" Both Roots are equal");
        r1=-b/(2*a);
        printf("\nRoot is : %f",r1);
    }
    
}