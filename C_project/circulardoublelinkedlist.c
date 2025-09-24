#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
void traversing(struct Node* ptr)
{
    while(ptr!=NULL){
        printf("Element is: %d",ptr->data);
        ptr=ptr->next;
    }
}
void searching(struct Node* head,int key)
{  int flag=0;
    struct Node* temp=head;
    do{
        if(temp->data==key)
        {
            flag=1;
        }
        temp=temp->next;
        
    }while(temp!=head);
    if(flag==1)
    {
        printf("%d is present \n",key);

    }else{
        printf("%d is not present\n",key);
    }
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
 head->data=5;
struct Node* head1=(struct Node*)malloc(sizeof(struct Node));
head1->data=10;
head1->prev=head;
head->next=head1;
struct Node* head2=(struct Node*)malloc(sizeof(struct Node));
head2->data=15;
head1->next=head2;
head2->prev=head1;
head->prev=head2;
head2->next=head;
traversing(head);
int key=15;
searching(head,key);
return 0; 
}