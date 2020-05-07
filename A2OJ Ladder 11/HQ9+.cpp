#include <iostream>
using namespace std;
 int main(){
     string s;
     getline(cin,s);
     bool flag;
     for(int i=0; i<s.length(); i++){
         flag=false;
         if(s[i]==72 || s[i]==81 || s[i]==57){
             flag=true;
             break;
         }     
     }
     if(flag){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
     return 0;
 }