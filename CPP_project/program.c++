#include<iostream>
 using namespace std;
 
 int digsum(int num){
    int digsum=0;
    while(num>0){
        int lastdig=num%10;
        num/=10;
        digsum+=lastdig;
    }
    return digsum;
 }
int main() {
  
    cout<<digsum(145);

    return 0;
}
                