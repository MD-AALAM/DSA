/*
hashing->it is used to search a data 

*/
#include<stdio.h>

int main()
{
int arr[]={3,5,6,1,2};
int target=4;
int size=sizeof(arr)/sizeof(arr[0]);
int max=arr[0];
for(int i=0; i<size; i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
int ha[max+1];
for(int i=0; i<max+1; i++){
    ha[i]=0;
}
for(int i=0; i<size; i++){
    ha[arr[i]]++;
}
if(ha[target]==0){
    printf("target is not found");
}
else{
    printf("target is found");
}
return 0;
}


/*
uper wale array me array ka size jitna tha utne ke hashing array banana parta tha 
jo space complexity ko badha deta hai
to is problem ko solve karne ke liye hum 2 method use karte hai
->uper wale me f(x)=x use karte the
->isme function f(x)=x%size use karte hai
1. close hashing->one type
1.chainning
2.open hashing->two types
    a.linear probing
    b.quadratic probing

*/