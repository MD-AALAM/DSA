#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int*arr;
};

int isempty(struct stack* st)
{
 if(st->top==-1){
    return 1;
 }
 else{
    return 0;
 }
}
int isfull(struct stack* st){
    if(st->top==st->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack* st,int value)
{
if(st->top==st->size-1)
{
    printf("stack overflow\n");
}
else{
    st->top++;
    st->arr[st->top]=value;
    printf("%d pushed to stack\n",value);
    }
}
int peek(struct stack* st)
{
if(st->top==-1)
{
    printf("stack is  empty\n");
    return -1;
}
else{
    int x=st->arr[st->top];
    printf("peek element is %d\n",x);
    return x;
}
}
int pop(struct stack* st)
{
    if(st->top==-1)
    {
        printf("stack underflow");
        return -1;
    }
    else{
        int x=st->arr[st->top];
        st->top--;
        printf("%d removed from stack\n",x);
        return x;
    }
}
int searching(struct stack* st,int key)
{
    int flag=0;
    for(int i=0; i<=st->top; i++)
    {
        if(st->arr[i]==key)
        {
            printf("%d is present\n",key);
            return i;
        }
    }
    printf("%d is not present\n",key);
    return -1;
}
void traversing(struct stack* st)
{
    if(st->top==-1)
    {
        printf("stack is empty\n");
    }
    else{
        for(int i=0; i<=st->top; i++)
        {
            printf("stack element is %d\n",st->arr[i]);
        }
    }
}
int main()
{
struct stack* st=(struct stack*)malloc(sizeof(struct stack));
st->size=5;
st->top=-1;
st->arr=(int*)malloc(st->size*sizeof(int));
  
   push(st,5);
   push(st,6);
   push(st,7);
   push(st,8);
   push(st,9);
   push(st,10);
   peek(st);
  // pop(st);
  // pop(st);
  // pop(st);
  // pop(st);
  // pop(st);
   //pop(st);
   //pop(st);
   int key = 7;
   searching(st,key);
   searching(st,20);
   traversing(st);
    return 0;
}