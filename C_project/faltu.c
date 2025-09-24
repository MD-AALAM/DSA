//doubly linkedlist
#include<stdio.h>
#include<stdlib.h>
  struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
  };
  struct Node* head=NULL;

  void display(){
    struct Node* temp=head;
    while(temp!=NULL){
      printf("%d\n",temp->data);
      temp=temp->next;
    }
    printf("\n");
  }
    void insertAtEnd(int value){
  struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
  newnode->data=value;
  newnode->next=NULL;
    if(head==NULL){
      newnode->prev=NULL;
      head=newnode;
      return;
    }
    else{
      struct Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=newnode;
      newnode->prev=temp;
    }
  }
  void insertAtBegin(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=head;
    if(head!=NULL){
      head->prev=newnode;
    }
      head=newnode;
  }
  void reverse(){
    
  }
int main()
{
  insertAtEnd(10);
  insertAtEnd(20);
  insertAtEnd(30);
  display();

  printf("After inserting at begining\n");
  insertAtBegin(5);
  display();
return 0;
}