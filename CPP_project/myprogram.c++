#include <iostream>
 using namespace  std;

 int main(){
  // pyramid pattern
     int n=10;
      for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
          cout<<" ";
        }
        cout<<"*";
        if(i!=0){
        for(int j=0;j<2*i-1; j++){
          cout<<" ";
        }
        cout<<"*";
      }
      cout<<endl;
      }
      // bottom part
      for(int i=0; i<n-1; i++){
        //spaces 
        for(int j=0; j<i+1; j++){
          cout<<" ";
        }
        cout<<"*";
        // between the stars print spaces 
        if(i!=n-2){
          for(int j=0; j<2*(n-i)-5; j++){
          cout<<" ";
        }
        cout<<"*";
          }
           cout<<endl;
        }
    return 0;
  }