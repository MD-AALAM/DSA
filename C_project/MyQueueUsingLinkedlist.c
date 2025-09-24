#include<stdio.h>
#include<stdlib.h>
    struct Node{
        int data;
        struct Node* next;
};
struct Node* front=NULL;
struct Node* rear=NULL;

void traversing(struct Node* ptr){
    while (ptr!=NULL)
    {
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
int isfull(){
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(front==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int value){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    if(isfull()){
        printf("Queue is overflow\n");
    }
    else{
        n->data=value;
        n->next=NULL;
        if(isempty()){
            front=rear=n;
        }
        else{
            rear->next=n;
            rear=n;
        }
    }
}
int dequeue(){
    int val;
    struct Node*ptr=front;
    if(isempty()){
        printf("Queue is underflow\n");
    }else{
        front=front->next;
         val=ptr->data;
        free(ptr);
    }
    printf("dequeue is:%d\n",val);
    return val;

}
int main()
{
traversing(front);
enqueue(5);
enqueue(10);
enqueue(15);
enqueue(20);
enqueue(25);
enqueue(30);
traversing(front);

printf("\n");

dequeue();
dequeue();

return 0;
}