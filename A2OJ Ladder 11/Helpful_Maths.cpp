#include <iostream>
#include <algorithm> 
using namespace std;
 int main(){
     string s;
     cin>>s;
    int n=(s.length()/2)+1;
    int arr[n];
    int j=0;
     for(int i=0; i<s.length(); i+=2){
         arr[j++]=s[i];
     }
     sort(arr, arr+n);

     for(int i=0; i<n; i++){
         if(i==n-1){
            cout<<(char)arr[i];
         }
         else
         {
            cout<<(char)arr[i]<<"+";
         }
         
     } 
    


     return 0;
 }