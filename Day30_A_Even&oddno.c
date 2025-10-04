#include<stdio.h>
int main(){
    int i,evencount=0,oddcount=0,arr[8]={12,45,78,54,23,98,67,34};
    for( i=0;i<8;i++ ) {
        if(arr[i]%2==0){
            evencount++;
         }
         else 
         {
            oddcount++;
         }
         printf("The number of even numbers is:%d\n",evencount);
            printf("The number of odd numbers is:%d\n",oddcount);
         }
         return 0;
}