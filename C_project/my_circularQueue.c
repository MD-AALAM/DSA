/*
Note:queue aur circular queue me sirf 2 cheeze change hai 
1.increement circular me different hai   //samajhna i=(i+1)%size
2.front,rear=0 ko zero se assign karna hoga
*/
#include<stdio.h>
#include<stdlib.h>
  struct circularQueue{
    int size;
    int front;
    int rear;
    int * arr;
};
int isfull(struct circularQueue *q){
    if((q->rear+1)%q->size==q->front){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct circularQueue *q){
    if(q->rear==q->front){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct circularQueue *q, int value){
    if(isfull(q)){
        printf("circular queue is overflow\n");
    }
    else{
       q->rear=(q->rear+1)%q->size;
       q->arr[q->rear]=value;
       printf("enqued is:%d\n",value);

    }
}
void dequeue(struct circularQueue *q){
    if(isempty(q)){
        printf("circular queue is empty\n");
    }
    else{
        q->front=(q->front+1)%q->size;
        int val=q->arr[q->front];
        printf("Dequeue is:%d\n",val);
    }
}
int main()
{
struct  circularQueue *q=(struct  circularQueue*)malloc(sizeof(struct  circularQueue));
q->size=6;
q->front=0;
q->rear=0;
q->arr=(int *)malloc(q->size*sizeof(int));

enqueue(q,5);
enqueue(q,10);
enqueue(q,15);
enqueue(q,20);
enqueue(q,25);
enqueue(q,30);

printf("\n");

dequeue(q);
dequeue(q);
dequeue(q);
dequeue(q);

return 0;
}