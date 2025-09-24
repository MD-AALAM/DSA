// queue-linear data structure(data store)
//queue follows FIFO principles(first in first out)
// types of queue
/*
1.simple queue
2.double ended queue(dequeu)
3.circular queue
4.priority queue

implementation of queue(linear data structure )
using static array
queue - front, rear, size, array
front =-1, rear=-1
*/

#include<stdio.h>
#include<stdlib.h>
#define size 100
int front =-1,rear =-1;
//creating array
int queue[size];

int isempty(){
    if(front==rear){
        return 1;
    }else{
        return 0;
    }
}
int isfull(){
    if(rear==size-1){
        return 1;
    }else{
        return 0;
    }
}
void enqueue(int value){
    if(rear==size-1){
        printf("queue overflow\n");
    }else{
        rear += 1;
        queue[rear]=value;
        printf("%d is enqueued\n",value);
    }
}
void dequeue(){// element ko insert karega 
    if(front==rear){
        printf("queue is underflow\n");
    }else{
        front +=1;// pehle index  -1 pe hota hai to 0 banne ne keliye
        int x=queue[front];
        printf("%d is is dequeued\n",x);
    }
}

int main(){
    enqueue(6);
    enqueue(7); 
    enqueue(8);
    enqueue(9);
    enqueue(10);
    dequeue();// ye romove karne ka kaam karta hai
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}
/*
agar hm size ko 5 karenge to
-- niche enqueue(11) insert nahi hoga overflow batayega
*/  
/*
agar hum dequeue ko size se zeyada bar call kaerenge to underflow batayega kiyuki us waqt 
dequeue front == rear ho jayega
-- niche dequeue() size se zeyada  insert nahi hoga underrflow batayega
*/ 