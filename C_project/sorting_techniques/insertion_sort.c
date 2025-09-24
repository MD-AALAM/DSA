#include<stdio.h>
void insertion(int arr[], int size){
    //insertion sort technique
for(int i=0; i<size; i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
}
int main()
{
int arr[]={10,5,6,3,2,4,7,8,9};
int size=sizeof(arr)/sizeof(arr[0]);

insertion(arr,size);
for(int i=0; i<size; i++){
    printf("%d\n",arr[i]);
}

return 0;
}