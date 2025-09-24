//implement stack using static array
#include<stdio.h>
#include<stdlib.h>
 
#define Max 50
 struct stack
 {
    int top;
    int arr[Max];   //static array name [size]

 };
 int isempty(struct stack* st)
 {
    if(st->top==-1){
        return 1;
    }else{
        return 0;
    }
 };
 
  int main(){
    struct stack st;
    st.top=-1;
    isempty(&st);
    

  }