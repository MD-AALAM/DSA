/*
1.selection sort
time complexity->
1.->best case=0(n^2)
2.->worst case=0(n^2)

space complexity=0(1)

*/

#include<stdio.h>
#include<stdlib.h>
//sorting using selection sort
void selectionsort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int min=i;
        for(int j=i+1; j<size; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

//sorting using bubble sort
void bubblesort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }
}
int main()
{
int arr[]={5,7,8,1,3,4,9};
int size=sizeof(arr)/sizeof(arr[0]);

//  selectionsort(arr,size);
//  for(int i=0; i<size; i++){
//     printf("%d\n",arr[i]);
//  }

bubblesort(arr,size);
 for(int i=0; i<size; i++){
    printf("%d\n",arr[i]);
 }

return 0;
}