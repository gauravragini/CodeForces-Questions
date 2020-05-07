#include <iostream>
using namespace std;
 int main(){
     int n,m;
     cin>>n>>m;
     
     for(int i=n+1; ;i++){
         bool flag =true;
         for(int j=2; j<i; j++){
             if(i%j==0){
                 flag=false;
                 break;
             }
         }
         if(flag){
             if(i!=m){
              cout<<"NO";
              exit (0);
             }
             else{
              cout<<"YES";
              exit (0);
             }
         }
     }
      return 0;
 }