#include<stdio.h>
#include<stdlib.h>
  struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

//create function to traverse doubly linkedlist
struct Node* traverse(struct Node* head){
    struct Node* p=head;
    while(p!=NULL){
        printf("Element is:%d\n",p->data);
        p=p->next;
    }
    return head;
}

// create function to insert at first in doubly linkedlist
struct Node* insnertAtFirst(struct Node* head,int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->prev=NULL;
    struct Node*p=head;
    newnode->next=p;
    p->prev=newnode;
    head=newnode;
    return head;

}

//create function to insert at index in doubly linkedlist
struct Node* insertAtIndex(struct Node* head,int data,int index){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    struct Node* p=head;
    for(int i=0; i!=index-1; i++){
        p=p->next;
    } 
    newnode->next=p->next;
    p->next=newnode->prev;
    p->next=newnode;
    return head;
}

//create function to insert at the end in doubly linkedlist
struct Node* insertAtEnd(struct Node* head, int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    struct Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    newnode->prev=p->next;
    p->next=newnode;
    newnode->next=NULL;
    return head;
}

//create function to delete first Node in doubly linkedlist
struct Node* deleteAtFirst(struct Node* head){
    struct Node* p=head;
    struct Node* q=head->next;
    head=head->next;
    q->prev=NULL;
    free(p);
    return head;
}

//create function to delete at given index in doubly linkdlist
struct Node* deleteAtIndex(struct Node* head,int index){
    struct Node* p=head;
    struct Node* q=head->next;
    for(int i=0; i!=index-1; i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    q->next=p;
    free(q);
    return head;
}

//create function to delete Node at last in  doubly linkedlist
struct Node* deleteAtLAst(struct Node* head){
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

int main()
{
struct Node* head=(struct Node*)malloc(sizeof(struct Node));
head->data=10;
head->prev=NULL;
struct Node* head1=(struct Node*)malloc(sizeof(struct Node));
head1->data=15;
head->next=head1;
head1->prev=head;
struct Node* head2=(struct Node*)malloc(sizeof(struct Node));
head1->next=head2;
head2->prev=head1;
head2->data=20;
struct Node* head3=(struct Node*)malloc(sizeof(struct Node));
head2->next=head3;
head3->prev=head2;
head3->data=25;
head3->next=NULL;

 printf("doubly linkedlist before traversal\n");
  head=traverse(head);

//   printf("doubly linkedlist after traversal\n");
//   head=insnertAtFirst(head,15);
//   head=traverse(head);

//   printf("doubly linkedlist after traversal\n");
//   head=insertAtIndex(head,45,2);
//   head=traverse(head);

//   printf("doubly linkedlist after traversal\n");
//   head=insertAtEnd(head,45);
//   head=traverse(head);

//   printf("doubly linkedlist after traversal\n");
//   head=deleteAtFirst(head);
//   head=traverse(head);

//   printf("doubly linkedlist after traversal\n");
//   head=deleteAtIndex(head,2);
//   head=traverse(head);

  printf("doubly linkedlist after traversal\n");
  head=deleteAtLAst(head);
  head=traverse(head);

return 0;
}