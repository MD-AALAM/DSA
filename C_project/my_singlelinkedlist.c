#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

    //traversing 
void traversing(struct Node* ptr){
   while(ptr!=NULL){
    printf("Element is: %d\n",ptr->data);
    ptr=ptr->next;
    }
}

//insertion at the beginning of the function implementing
struct Node* insertatbeginning(struct Node* head, int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return newnode;

}
//insertion at index of the function 
struct Node* insertatindex(struct Node* head,int data,int index){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    struct Node* p=head;
   for(int i=0; i!=index-1; i++){
    p=p->next;
   }
   newnode->next=p->next;
   p->next=newnode;
   return head;
}
//insertion at the end 
struct Node* insertatend(struct Node* head, int data){
   struct Node* newnode=(struct Node*)malloc(sizeof(struct Node)); 
   newnode->data=data;
   struct Node* p = head;
   while(p->next!=NULL){
    p=p->next;
   }
   p->next=newnode;
   newnode->next=NULL;
   return head;
}
//insert after a node
struct Node* insertAfetrNode(struct Node* head,struct Node* prev,int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;

    newnode->next=prev->next;
    prev->next=newnode;
    return head;
}
//delete the first Node 
struct Node* deletefirstNode(struct Node* head){
    struct Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
//delete node at a given index
struct Node* deleteatindex(struct Node* head,int index){
    struct Node* temp=head;
    struct Node* temp1=head->next;
    for(int i=0; i!=index-1; i++){
        temp=temp->next;
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    free(temp1);
    return head;
}
//delete node at last 
struct Node* deleteatend(struct Node* head){
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
//delete by given value
struct Node* deletebyvalue(struct Node* head,int value){
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
        return head;
    }
}

 int main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
     head->data=7;
    struct Node* head1=(struct Node*)malloc(sizeof(struct Node));
     head->next=head1;
     head1->data=10;
    struct Node* head2=(struct Node*)malloc(sizeof(struct Node));
    head1->next=head2;
    head2->data=11;
    head2->next=NULL;

    //traversing function call
    printf("linkedlist before deleting\n");
    traversing(head);
    
    //insert beginning function call
// printf("linkedlist before insertion\n");
// head=insertatbeginning(head,14);
// traversing(head);

    //insert index function call
// printf("linkedlist before insertion\n");
//    head=insertatindex(head,14,1);
//    traversing(head);

//insert end function call
//  printf("linkedlist before insertion\n");
//   head=insertatend(head,14);
//   traversing(head);

    //insert After Node function call
     printf("linkedlist after insertion\n");
      head=insertAfetrNode(head,head1,21);
      traversing(head);


 //deleteatfirst function call
//  printf(" \n ");
//  head=deletefirstNode(head);
//  traversing(head);

//delete function at index
//  printf(" \n ");
//  head=deleteatindex(head,1);
//  traversing(head);

  //delete at end function call
//   printf(" \n ");
//  head=deleteatend(head);
//  traversing(head);

   //delete by value function call
// printf("    ");
// head=deletebyvalue(head,7);
// traversing(head);
    return 0;
}