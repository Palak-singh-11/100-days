#include<stdio.h>
// Q57.Find sum of elements of an array
int main(){
    int i=0,sum=0,arr[6]={6,45,78,54,23,98};
    while(i<6){
        sum =sum+arr[i];
        i++;
    }
    printf("The sum of the elements of array is %d:" ,sum);
    return 0;


}