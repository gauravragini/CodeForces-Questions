#include <iostream>
using namespace std;

int main (){
   string s;
   cin>>s;
    int u_count=0,l_count=0;
    for (int i=0; i<s.length(); i++){
       if(s[i] >= 'A' && s[i]<='Z'){
         u_count++;
       }
    }
     l_count=s.length()-u_count;

     if(l_count>=u_count){
        for (int i=0; i<s.length(); i++)
            putchar(tolower(s[i]));  
     }
     else{
        for (int i=0; i<s.length(); i++)
            putchar(toupper(s[i]));
     }
   return 0;
}