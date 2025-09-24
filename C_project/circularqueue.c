/*
circular queue: circular queue is a linear data 
structure where last element is connected to the first element.
*/
#include<stdio.h>>
#include<stdlib.h>
#define size 3
int front =-1,rear=-1;
int queue[size];
int isempty(){
    if(front==-1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(){
    if((rear=1)%size==front){
        return 1;
    }else{
        return 0;
    }
}
void enqueue(int value){
   if(isfull()==1){
    printf("queue overflowed\n");
    return;
   }else if(front==-1){
    front=0;rear=0;
   }else{
    rear=(rear+1)%size;
   }
   queue[rear]=value;
   printf("%d is enqueue\n",value);
}
void dequeue(){
    if(isempty()==1){
        printf("queue underflow\n");
        return;
    }else if(front==rear){
        printf("%d is dequeue\n",queue[front]);
        front=-1;
        rear=-1;
    }else{
        printf("%d is dequeue\n",queue[front]);
        front=(front+1)%size;
    }
}

int main(){
   enqueue(5);
   enqueue(6);
   enqueue(7);
   dequeue();
   dequeue();
   dequeue();
   dequeue();
}