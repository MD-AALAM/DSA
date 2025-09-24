#include<stdio.h>
#include<stdlib.h>
  struct Node{
    int data;
    struct Node* next;
};
struct Node* top=NULL; //this is called global variable and it can be used in every function

void tarversal(){
    struct Node* ptr;
    while(ptr!=NULL){
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int isempty(struct Node* top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct Node* top){
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }

}
//create function to perform push operation
struct Node* push(struct Node* top,int value){
    if(isfull(top)){
       printf("Stack overflowed\n");
    }
    else{
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=value;
    n->next=top;
    top=n;
    return top;
    }
}
 //2.method two to implement pop element
int pop(struct Node* ptr){
    if(isempty(ptr)){
        printf("Stack underflow\n");
    }
    else{
        struct Node* n=ptr;
        top=ptr->next;
        int x=n->data;
        free(n);
        return x;
    }
}
//function to create peek element
int peek(int pos){
    struct Node* ptr=top;
    for(int i=0; (i<pos-1&&ptr!=NULL); i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
        } else{
       return -1;
        }
}
int main()
{
top=push(top,78);
top=push(top,60);
top=push(top,50);
top=push(top,40);
tarversal();

// printf("\n");


// printf("pop element is:%d\n",pop(top));
// tarversal(top);

// printf("\n");
// for(int i=1; i<4; i++){
//     printf("value at position %d is:%d\n",i,peek(i));
// }

return 0;
}