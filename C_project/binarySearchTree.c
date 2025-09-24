//binary_search_tree
//inorder to store binary search tree-> left child<root<right child

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
    struct Node* createNode(int value){
        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=value;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
    }
    
    struct Node* insert(struct Node* root, int value){
        if(root==NULL){
            printf("value %d is inserted\n",value);
            return createNode(value);
        }
        else if(value<root->data){
            root->left=insert(root->left,value);
        }else{
            root->right=insert(root->right,value);
        }   
        return root;
    } 
    //traversal in binary search tree
    //preorder traversal
    void preorder(struct Node* root){
        if(root==NULL){
            return;
        }
        else{
            printf("%d\n",root->data);
            preorder(root->left);
            preorder(root->right);
        }
    } 
    //inorder traversal
    void inorder(struct Node* root){
        if(root==NULL){
            return;
        }
        else{
            inorder(root->left);
            printf("%d\n",root->data);
            inorder(root->right);
        }
    } 
    //postorder traversal
    void postorder(struct Node* root){
        if(root==NULL){
            return;
        }
        else{
            postorder(root->left);
            postorder(root->right);
            printf("%d\n",root->data);
        }
    }
        //  searching in binary search tree
    struct Node* searching(struct Node* root,int target)
    {
        if(root==NULL || root->data==target)
        {
            return root;
        }
        else if(root->data<target)
        {
            return searching(root->right,target);
        }
        else{
            return searching(root->left,target);
        }
        return root;
    }

    //find min value in binary search tree
       struct Node*findmin(struct Node* root)
    {
        if(root==NULL)
        {
            return NULL;
        }
        else if(root->left!=NULL)
        {
            return findmin(root->left);
        }
        return root;
}

int main()
{
    struct Node* root=NULL;
    root=insert(root,40);
    insert(root,45);
    insert(root,35);
    insert(root,34);
    insert(root,50);
    insert(root,55);
    insert(root,53);
    printf("preorder traversal\n");
    preorder(root);

    printf("inorder traversal\n");
    inorder(root);

    printf("postorder traversal\n");
    postorder(root);

    printf("\n");
    //searching
    int target=53;
    searching(root,target);
    if(searching==NULL)
    {
        printf("Target not found\n");
    }
    else{
        printf("Target found %d\n",target);
    }
    printf("\n");
    //find min value
        int minvalue;
    struct Node* minnode=findmin(root);
    if(minnode!=NULL)
    {
        minvalue=minnode->data;
        printf("Minimum value in the BST is %d\n",minvalue);
    }
    else{
        printf("The tree is empty\n");
}


return 0;
}