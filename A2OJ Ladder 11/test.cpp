#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int side=n*2+1;
    for(int i=0; i<side; i++){
      for(int j=0; j<side; j++){
        if(i<n && j<n || i>n && j<n || i>n && j<n || i>n && j>n)
           cout<<"x";
        else
        {
          cout<<" ";
        }
        
        
      }
      cout<<endl;
    }
    return 0;
 }