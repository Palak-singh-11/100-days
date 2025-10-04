//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("The sum of a and b is %d",a+b);
    printf("\nThe difference of a and b is %d",a-b);
    printf("\nThe product of a and b is %d",a*b);
    printf("\nThe division of a and b is %d",a/b);
    return 0;
}

