#include<stdio.h>
int mini(int arr[],int size){
    int min=arr[0];
    for(int i=0; i<size; i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
    return min;

    
}
int maxm(int arr[], int size){
    int max=arr[0];
    for(int i=1; i<size; i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}

//find sorting element using selection sort
void selecetionsort(int arr[], int size){
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

int main()
{
int arr[]={7,5,1,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
// printf("%d\n",mini(arr,size));

// printf("%d",maxm(arr,size));
selecetionsort(arr,size);
for(int i=0; i<size; i++){
    printf("%d\n",arr[i]);
}
// printf("%d",selecetiosort(arr,size));

return 0;
}