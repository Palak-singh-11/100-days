//Q50.Write a program to print the following pattern:
//*****
 //****
  //***
   //**
    //*
#include<stdio.h>
int main(){
    int i,j,k,n=5;
    for(i=n;i>=1;i--) {
        for(j=1;j<=i;j++) {
            printf("*");
        }
    {
        printf("\n");
    }
    }
}