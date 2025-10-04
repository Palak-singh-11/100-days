#include<stdio.h>
int main(){
    int i,poscount=0,negcount=0,zerocount=0,arr[8]={-2,5,-8,4,3,8,-7,0};
    for( i=0;i<8;i++ ) {
        if(arr[i]>0){
            poscount++;
         }
         else if(arr[i]<0){
            negcount++;
         }
         else{
            zerocount++;
             }
             }
         printf("The number of positive numbers is:%d\n",poscount);
            printf("The number of negative numbers is:%d\n",negcount);
            printf("The number of zeros is:%d\n",zerocount);
         return 0;
}