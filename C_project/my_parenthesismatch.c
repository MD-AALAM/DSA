#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};
//check stack is empty or not
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
int push(struct stack *ptr, char value){
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
    char val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
}
int parenthesisMatch(char* exp){
    struct stack * sp;
    sp->size=80;
    sp->top=-1;
    sp->arr=(char*)malloc(sizeof(char));

    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i]=='('){
            push(sp,'(');
        }
        else if(exp[i]==')'){
            if(isempty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    if(isempty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
 char* exp="8*(9))";

 if(parenthesisMatch(exp)){
    printf("the parenthesis is matching\n");
 }
 else{
    printf("the parenthesis is not matching\n");
 }

return 0;
}