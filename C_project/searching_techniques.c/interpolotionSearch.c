/*
->a variant of binary search
-> array must be sorted

condition

1. declare two variable same as binary search
(i) low
(ii) high

2.calculate mid index    
mid=low+(target-arr[low])*(high-low))/(arr[high]-arr[low])

3.
(i) arr[mid]==target
  return mid
(ii) arr[mid]<target
  lowmid+1
(iii) arr[mid]>target
 high=mid-1
*/
#include<stdio.h>

int interpolotion(int arr[], int size, int target){
    int low=0;
    int high=size-1;
    while(low<=high&&target>=arr[low]&&target<=arr[high]){

        int mid=low+(target-arr[low])*(high-low)/(arr[high]-arr[low]);
        if(arr[mid]==target){
            printf("target %d is found at index %d\n",target,mid);
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("target is not found\n");
    return -1;
}
int main()
{
int arr[]={4,6,9,13,16,19,23};
int size=(sizeof(arr)/sizeof(arr[0]));
int target=19;

interpolotion(arr,size,target);

return 0;
}