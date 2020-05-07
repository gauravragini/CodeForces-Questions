#include <iostream>
using namespace std;
 int main(){
     string a,b;
     cin>>a>>b;

     for(int i=0; i<a.length(); i++){
         if(tolower(a[i]) != tolower(b[i])){
            if(tolower(a[i])-tolower(b[i])<0){
                cout<<"-1";
                exit (0); 
            }
            else{
                cout<<"1";
                exit (0);
            }
         }
     }
     cout<<"0";
     return 0;
 }