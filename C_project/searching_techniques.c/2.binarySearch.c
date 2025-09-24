//condition:
//step 1.must be sorted(ascending,descending)
//step 2.we will take two variable 1->low
                            //2.->high
//step 3.calculate mid index->(low+high)/2
//step 4.--arr[mid]==target=>mid index=>return
//      .--arr[mid]<target=> low=> mid+1
//      .--arr[mid]>target=> high=> mid-1



//time complexity=1.best case=>O(1)
//                2.worst case=>O(log base 2 n)
// space complexity=>O(1)
#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[],int size,int target){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            printf("target %d is found at index %d \n",target, mid);
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("target %d is not found at\n",target);
    return -1;
}

int main(){
    int arr[]={5,7,8,11,14,19,25,29,34};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int target=29;
    binarySearch(arr,size,target);

    return 0;
}