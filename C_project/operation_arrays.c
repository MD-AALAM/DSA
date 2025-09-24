#include<stdio.h>

void display(int arr[],int size){
    for(int i=0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
//insert some value to an array at any index
int indinsertion(int arr[],int size,int capacity,int element,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1; i>=index; i--){     //i ko index manke size-1 kiye to 5-1=4 hogaya
        arr[i+1]=arr[i];  //array index ko ek aage badhana
    }
    arr[index]=element;
    return 1;
}
//delete a vlue at any index of an array
void indDeletion(int arr[],int size, int index){
    if(index>size-1){
        printf("This element is out of index\n"); 
    }
    for(int i=index; i<size-1; i++){
        arr[i]=arr[i+1];
    }
}

int main()
{
    int arr[100]={10,15,20,25,30};
    int capacity=(sizeof(arr)/sizeof(arr[0]));
    int size=5,element=45,index=3;
    display(arr,size);
    // indinsertion(arr,size,capacity,element,index);
    // size += 1;
    // display(arr,size);
    indDeletion(arr,size,index);
    size -= 1;
    display(arr,size);
    
return 0;
}