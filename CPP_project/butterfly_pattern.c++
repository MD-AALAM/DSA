#include<iostream>
 using namespace std;

    int main(){
      int n; 
      cout<<"enter number n:";
      cin>>n;
      for(int i=0; i<n; i++){
       // print first star triangle
        for(int j=0; j<=i; j++){
            cout<<"*";
         }
        // //print spaces between the triangle star
          for(int j=0; j<2*(n-2-i)+2; j++){
             cout<<" ";
          }
        //print star after the space 
           for(int j=1; j<=i+1; j++){
            cout<<"*";
           }
        
         cout<<endl;
    }
    for(int i=0; i<n; i++){
      //print bottom first inverted triangle
      for(int j=0; j<n-i; j++){
        cout<<"*";
      }
      //print bottom space
      for(int j=0; j<2*(n-(n-1)+i)-2;j++){
             cout<<" ";
          }
          //print bottom second inverted triangle
          for(int j=0; j<n-i; j++){
            cout<<"*";
          }
      cout<<endl;
      }
        return 0;
    }