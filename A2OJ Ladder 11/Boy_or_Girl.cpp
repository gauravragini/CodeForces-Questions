#include <iostream>
using namespace std;
 int main(){
     string s;
     cin>>s;
     int count=0;
     bool flag;
     for(int i=0; i<s.length(); i++){
         flag=true;
         for(int j=0; j<i; j++){
             if(s[i]==s[j]){
                 flag=false;
                 break;
             }
         }
         if(flag)
            count++;
     }
    
     if(count%2==0)
        cout<< "CHAT WITH HER!";
     else
        cout<<"IGNORE HIM!";
     return 0;
 }