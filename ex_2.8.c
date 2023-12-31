// Exercise Question :find the GCD (Greatest Common Divisor) of two numbers
    //     2|24              2|30           24=2*2*2*3
    // -----------        ----------        30=2*3*5
    //     2|12              3|15           GCD=2*3=6
    //     2|6               5|5
    //     3|3                |1
    //      |1

#include <stdio.h>
void main(){
    int n1,n2,i,gcd_num;
    printf("Enter any two number :");
    scanf("%d %d",&n1,&n2); //24 30
    for(i=1;i<=n1 && i<=n2;i++){    //2<=24 && 2<=30
        if(n1%i==0 && n2%i==0){     //24%2==0 && 30%2==0
            gcd_num=i;            
        }
    }
    printf("GCD of two number %d and %d is : %d",n1,n2,gcd_num);
}
        