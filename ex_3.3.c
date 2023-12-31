// Exercise Question :calculate the area of a circle using a function
#include <stdio.h>
void area(int);
void area(int r){
    int ans;
    ans=3.14*r*r;
    printf("Area of circle is :%d",ans);
}
int main(){
    int r;
    printf("Enter value of radius :");
    scanf("%d",&r);
    area(r);
}