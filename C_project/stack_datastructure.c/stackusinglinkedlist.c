//implementation using linkedlist
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* top=NULL;
int isempty(){

        if(top==NULL){
            return 1;
        }else{
            return 0;
        }

}
void push(int value)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=top;
    top=newnode;
    printf("%d pushed\n",value);
    
}
void peek(){
    if(top==NULL){
        printf("stack isempty\n");
    }else{
        printf("peek element is %d\n",top->data);
    }

}
void pop(){
    if(top==NULL){
        printf("underflow\n");

    }else{
        struct Node* temp=top;
        printf("%d popped from stack \n",top->data);
        top=top->next;
    }
}

int main(){
  isempty();
  push(5);
  push(6);
  push(7);
  peek();
  pop();
}