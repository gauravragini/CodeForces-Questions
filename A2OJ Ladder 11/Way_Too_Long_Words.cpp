#include <iostream>
using namespace std;
 int main(){
     int n;
     cin>>n;
     string temp;
     while(n--){
         cin>>temp;
         if(temp.length()>10)
            cout<<temp[0]<<temp.length()-2<<temp[temp.length()-1]<<endl;
        else
        {
            cout<<temp<<endl;
        }
        
  }
    return 0;
 }