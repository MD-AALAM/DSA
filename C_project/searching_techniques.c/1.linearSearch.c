//implementaion binary search and interpolotion search
//these are three types
//1.linear search
//2.binary search
//3.interpolotion search

//1.linear search:->linear search is a searching algorithm where we compare every dataset(array,string)
//time complexity:1.best case->O(1)
                //2.worst case->O(n)
//space complexity:->variable not declared in function so O(1):
#include<stdio.h>
#include<stdlib.h>

int linearsearch(int arr[], int size, int target){
for(int i=0; i<size; i++){
    if(arr[i]==target){
        printf("target %d is found at index %d",target,i);
        return i;
    }
    }
    printf("target %d is not found\n",target);
    return -1;
}
int main(){
    int arr[]={5,7,2,1,4,9,15,19,14};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int target=19;
    linearsearch(arr,size,target);
    return 0;
}