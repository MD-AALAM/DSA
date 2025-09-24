// stack -stack is a linear data structure (stores data)
//





#include<stdio.h>
#include<stdlib.h>
   struct stack{    //stack structure
    int top;
    int size;
    int *arr;
   };
   int isfull(struct stack* st)
   {
    if(st->top==st->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
   }
   int isempty(struct stack* st){
    if(st->top==-1){
        return 1;
    }else{
        return 0;
    }
   }
void push(struct stack* st,int value){
if(st->top==st->size-1){
    printf("stack overflowed");
}else{
    st->top++;
    st->arr[st->top]=value;
    printf("%d pushed to stack\n",value);
}
}
int pop(struct stack* st){
    if(st->top==-1){
        printf("stack underflow\n");
    }else{
        int x=st->arr[st->top];
        st->top--;
        printf("%d popped from stack\n",x);
        return x;
    }
}
void traversing(struct stack* st){
    if(st->top==-1){
        printf("stack is empty\n");
    }else{
        for(int i=0; i<=st->top; i++)
        {
            printf("stack element is %d\n",st->arr[i]);
        }
        
    }
}
void searching(struct stack* st,int key){
    int flag=0;
   for(int i=0; i<st->top; i++)
   {
    if(st->arr[i]==key){
        flag=1;
    }
   }
   if(flag==1){
    printf("%d is not present\n",key);
}else{
    printf("%d is present\n",key);
}
}
 int main()
 {
    struct stack* st=(struct stack*)malloc(sizeof(struct stack));
    st->top=-1;
    st->size=5;
    st->arr=(int*)malloc(sizeof(st->size*sizeof(int)));
    push(st,5);
    //pop(st);
    traversing(st);
    int key=5;
    seraching(st,key);
    return 0;
 }