//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main() {
float length, breadth ;
    printf("enter length");
scanf("%f", &length);
printf("enter breadth");
scanf("%d", &breadth);
    printf("area of rectanle is: %f /n" , length*breadth);
    printf("perimeter of rectangle is: %f /n" , 2*(length+breadth));
return 0; 
}

