#include<stdio.h>
void merge(int arr[],int mid, int low, int high){
    int i,j,k,B[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&&j<=high){
        if(arr[i]<arr[j]){
           B[k]=arr[i];
           i++;
           k++; 
        }
        else{
            B[k]=arr[j];
            j++;
            k++;
        }
    }   
    while(i<=mid){
        B[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high){
        B[k]=arr[j];
        k++;
        j++;
    }
    for(int i=low; i<=high; i++){
       arr[i]=B[i]; 
    }
}
void mergeSort(int arr[],int low, int  high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}
int main()
{
int arr[]={12,32,43,65,86,19,78,56,23,21};
int size=sizeof(arr)/sizeof(arr[0]);
int low=0;
int high=size-1;

    mergeSort(arr,low,high);
    for(int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
return 0;
}