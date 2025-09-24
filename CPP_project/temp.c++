#include<iostream>
using namespace std;

int digsum(int n){
    int digsum=1;
    for(int i=0; i<n; i++){
        int lastdig = n%10;
        n /= 10;
        digsum += lastdig;
    }
    return digsum;
}

int main(){
   cout<<digsum(145);
    return 0;
}