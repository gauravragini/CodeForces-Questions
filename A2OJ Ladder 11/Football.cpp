#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  string a="0",b="0",temp;
  int counta=0,countb=0;
      
  for(int i=0;i<n;i++){
      cin>>temp;
      if(a == "0" && temp!=b){
          a=temp;
      }
      else if(b == "0" && temp!=a){
          b=temp;
      }
      if(temp==a){
          counta++;
      }
      else if(temp == b) {
          countb++;
      }
  }
  if(counta > countb)
    cout<<a<<endl;
  else
    cout<<b<<endl;
     return 0;
 }