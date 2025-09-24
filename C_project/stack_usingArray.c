#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};
//check stack is empty or not`1
int isempty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
//check stack is full or not
int isfull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
//push element in the stack array
int push(struct stack *ptr, int value){
    if(isfull(ptr)){
        printf("stack is overflow! cannot push %d to the stack\n",value);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
        return value;
    }
}
//pop element in the stack array
int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("element is underflow! cannot pop\n");
        return -1;
    }
    int val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
}
//peek or position of element in the stack array
int peek(struct stack* ptr,int pos){
    int arrayind=ptr->top-pos+1;//to find the postion of the stack array condition
    if(arrayind<0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
       return ptr->arr[arrayind];
    }
}
//to find topmost element
int stacktop(struct stack* ptr){
    return ptr->arr[ptr->top];

}
//top find bottom most element in the stack
int stackbottom(struct stack* ptr){
    return ptr->arr[0];
}
int main()
{
    //isko hm aise likhte hai aur asani keliye . ki jagah -> use karte hai jab pointer lete hai
// struct stack s;
// s.size=80;
// s.top=-1;
// s.arr=(int*)malloc(s.size*sizeof(int));
struct stack *s=(struct stack*)malloc(sizeof(struct stack));
s->size=10;
s->top=-1;
s->arr=(int*)malloc(s->size*sizeof(int));

//check stack is empty or not
 printf("before push empty:%d\n",isempty(s));
  printf("before push full:%d\n",isfull(s));
  printf("\n");
  //push 
    printf("push element is:%d\n",push(s,15));
    printf("push element is:%d\n",push(s,18));
    printf("push element is:%d\n",push(s,20));
    printf("push element is:%d\n",push(s,25));
    printf("push element is:%d\n",push(s,30));
    printf("push element is:%d\n",push(s,35));
    printf("push element is:%d\n",push(s,40));
    printf("push element is:%d\n",push(s,45));
    printf("push element is:%d\n",push(s,50));
    printf("push element is:%d\n",push(s,55));
    printf("\n");
  
//pop function print
  printf("pop element is:%d\n",pop(s));
  printf("pop element is:%d\n",pop(s));
  printf("pop element is:%d\n",pop(s));
  printf("pop element is:%d\n",pop(s));
      printf("\n");
  //peek function print
  printf("%d\n",peek(s,1));
  printf("%d\n",peek(s,2));
  printf("%d\n",peek(s,3));

    //peek function whole print 
//   for(int j=1; j<=s->top+1; j++){
//     printf("the value at position: %d is %d\n",j,peek(s,j));
//   }
  printf("\n");
  //to find topmost or bottommost element
  printf("th topmost value is:%d\n",stacktop(s));
  printf("th bottommost value is:%d\n",stackbottom(s)); 

return 0;
}