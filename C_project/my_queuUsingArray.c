#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int front;
    int rear;
    int *arr;
};

int isfull(struct Queue *q){
    if(q->rear==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct Queue *q){
    if(q->front==q->rear){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct Queue *q,int value){
    if(isfull(q)){
        printf("Queue is overflow\n");
    }
    else{
        q->rear++;
        q->arr[q->rear]=value;
        printf("%d is enqueu\n",value);
    }
}
int dequeue(struct Queue* q){
    if(isempty(q)){
        printf("Queue is underflow\n");
    }
    else{
        q->front++;
        int a;
        a=q->arr[q->front];
      return a;
    }
}
void traverse(struct Queue* q){
    if(isempty(q)){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue elements are:\n");
    for(int i=q->front+1;i<=q->rear;i++){
        printf("%d\n",q->arr[i]);
    }
    }
}
void search(struct Queue* q,int target){
    if(isempty(q)){
        printf("Queue is empty\n");
    }
    else{
        for(int i=q->front+1;i<=q->rear;i++){
            if(q->arr[i]==target){
                printf("%d is found at index %d\n",target,i);
                return;
            }
        }
        printf("%d is not found in the queue\n",target);
    }
}
int main()
{
struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
q->size=10;
q->rear=-1;
q->front=-1;
q->arr=(int *)malloc(q->size*sizeof(int));

enqueue(q,10);
enqueue(q,15);
enqueue(q,20);
enqueue(q,25);
enqueue(q,30);

printf("\n");

printf("%d is dequeue\n",dequeue(q));
printf("%d is dequeue\n",dequeue(q));

printf("\n");
traverse(q);

printf("\n");
search(q,25);
return 0;
}