#include<stdio.h>
#include<stdlib.h>
  struct Node{
    int data;
    struct Node* next;
};
void tarversal(struct Node* ptr){
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
struct Node* push(struct Node* top,int x){
    if(isfull(top)){
       printf("Stack overflowed\n");
    }
    else{
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=x;
    n->next=top;
    top=n;
    return top;
    }
}
//1.mthod one to prform pop opretion
  //pop ko jab hm call karenge to & dena ho hoga dereference karke
// int pop(struct Node** top){
//     if(isempty(*top)){
//         printf("Stack underflow\n");
//     }
//     else{
//         struct Node* n=*top;
//         *top=(*top)->next;
//         int x=n->data;
//         free(n);
//         return x;
//     }
// }
int main()
{
struct Node* top=NULL; 
top=push(top,78);
top=push(top,60);
top=push(top,50);
top=push(top,40);
tarversal(top);

printf("\n");

//1.method one pop function call
// pop(&top);
// printf("pop element is:%d\n",pop(&top));
// tarversal(top);

return 0;
}