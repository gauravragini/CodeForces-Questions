#include <iostream>
using namespace std;
int main (){
   string s;
   int n,t;
   cin>>n>>t;
   cin>>s;
   while(t--){
    for (int i=n-1; i>=0; i--){
       if(s[i]=='G' && s[i-1]=='B'){
          s[i]='B';s[i-1]='G';
          i--;
       }
    }
   }
   cout<<s;
   return 0;
}