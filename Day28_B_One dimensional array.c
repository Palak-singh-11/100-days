#include<stdio.h>
// Q56.Read and print marks of 4 subjects using array
int main(){
    int marks[4];
    for(int i=0;i<4;i++){
        printf("Enter the marks of subject %d is:",i);
        scanf("%d" ,&marks[i]);
        }
for(int i=0;i<4;i++){
        printf("The marks of %d subject is %d\n",i, marks[i]);
        }
        return 0;
}
