#include<stdio.h>
#include<stdlib.h>
   struct Node{
    int data;
    struct Node* next;
};
//create function to travese circular linkedlist
struct Node* traverse(struct Node* head){
    struct Node* p=head;
    do{
        printf("Element is:%d\n",p->data);
        p=p->next;
    }while(p!=head);
    return head;
}

//create function to insert at beginning of circular linkedlist
// struct Node* insertAtFirst(struct Node* head, int data){
//     struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
//     newnode->data=data;
//     struct Node* p=head->next;
//     while(p->next!=head){
//         p=p->next;
//     }
//     p->next=newnode;
//     newnode->next=head;
//     head=newnode;
//     return head;
// }

//create function to insert at given index of circular linkedlist
// struct Node* insertAtIndex(struct Node* head, int data, int index){
//     struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
//     newnode->data=data;
//     struct Node* p=head;
//     for(int i=0; i!=index-1; i++){
//         p=p->next;
//     }
//     newnode->next=p->next;
//     p->next=newnode;
//     return head;

// }

//create function to insert at the end of the circular linkedlist
// struct Node* insertAtEnd(struct Node* head,int data){
//     struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
//     newnode->data=data;
//     struct Node* p=head->next;
//     while(p->next!=head){
//         p=p->next;
//     }
//     newnode->next=p->next;
//     p->next=newnode;
//     return head;
// }

 //create function to insert at given value by circular linkedlist
// struct Node* insrtAtvalue(struct Node* head, int data, int value){
//     struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
//     newnode->data=data;
//     struct Node* p=head;
//     struct Node* q=head->next;
//     while(q->data!=value && q->next!=head) {
//         p=p->next;
//         q=q->next;
//     }  
//     if(q->data==value){
//         newnode->next=p->next;
//         p->next=newnode;
//         return head;
//     }
//     if(q->data!=value){
//         printf("value %d is not found in circular linkedlist\n");
//     }
// }

//create function to delete the circular Node at the beginning
// struct Node* deleteAtFirst(struct Node* head){
//     struct Node* p=head;
//     struct Node* q=head;
//     while(p->next!=head){
//         p=p->next;
//     }
//     head=head->next;
//     p->next=head;
//     free(q);
//     return head;
// }

//create function to delete the node at an index of circular linkedlist
// struct Node* deleteAtIndex(struct Node* head, int index){
//     struct Node* p=head;
//     struct Node* q=head->next;
//     for(int i=0; i!=index-1; i++){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     q->next=p;
//     free(q);
//     return head;
// }

//create function to delete Node at last
// struct Node* deleteAtLast(struct Node* head){
//     struct Node* p=head;
//     struct Node* q=head->next;
//     while(q->next!=head){
//         q=q->next;
//         p=p->next;
//     }
//     p->next=q->next;
//     q->next=p;
//     free(q);
//     return head;
// }
int main()
{
struct Node* head=(struct Node*)malloc(sizeof(struct Node));
head->data=10;
struct Node* head1=(struct Node*)malloc(sizeof(struct Node));
head1->data=15;
head->next=head1;
struct Node* head2=(struct Node*)malloc(sizeof(struct Node));
head2->data=20;
head1->next=head2;
struct Node* head3=(struct Node*)malloc(sizeof(struct Node));
head3->data=25;
head2->next=head3;
head3->next=head;

printf("circular linkedlist element\n");
 head=traverse(head);

//  head=insertAtFirst(head,5);
//  printf("insert after circular linkedlist element\n");
//  head=traverse(head);

    // head=insertAtIndex(head,30,3);
    // printf("insert after an index circular linkedlist element\n");
    // head=traverse(head);

    // head=insertAtEnd(head,40);
    // printf("insert at the end circular linkedlist element\n");
    // head=traverse(head);

    // head=insrtAtvalue(head, 45,60);
    // printf("insert at the end circular linkedlist element\n");
    // head=traverse(head);

    // head=deleteAtFirst(head);
    // printf("delete at first circular linkedlist element\n");
    // head=traverse(head);

    //   head=deleteAtIndex(head,2);
    // printf("delete at an index circular linkedlist element\n");
    // head=traverse(head);

    // head=deleteAtLast(head);
    // printf("delete at last circular linkedlist element\n");
    // head=traverse(head);



return 0;
}