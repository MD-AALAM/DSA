#include<stdio.h>
void printNum(int n){
    // it is called base case
    if(n==1){
        printf("%d\n",n);
        return;
    }
    printf("%d\n",n);
   return printNum(n-1);
}
//create function to find sum of n natural number
int sumofN(int n){
    if(n==0){
        return 0;
    }
    return n+sumofN(n-1);
}
//create function to find factorial number
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n=5;
     printf("%d",sumofN(5));
    // printf("%d",factorial(5));
// printNum(100);    
return 0;
}