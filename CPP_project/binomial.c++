#include <iostream>
 using namespace  std;

//  int minoftwonbr(int a,int b){
//     if(a<b){
//     return a;
//  }else{
//     return b;
//  }
//  }
 int factorialN(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
 }
 int nCr(int n, int r){
    int fact_n=factorialN(n);
    int fact_r=factorialN(r);
    int fact_nmr=factorialN(n-r);
    
    return fact_n/(fact_r*fact_nmr);
 }
 int main(){
        //cout<<"min="<<minoftwonbr(5,3);
    // cout<<"sum="<<sumN(5)<<endl;
    // cout<<"sum="<<sumN(10)<<endl;
    // cout<<"sum="<<sumN(100)<<endl;
    // cout<<"factorial="<<factorialN(4)<<endl;
    // cout<<"factorial="<<factorialN(5);
    int n,r;
    cout<<"enter number n:";
    cin>> n ;
    cout<<"enter number r:";
    cin>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
 }