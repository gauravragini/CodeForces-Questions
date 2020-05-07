#include <iostream>
#include<ctype.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        s[i]=(tolower(s[i]));
 
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){
            s.replace(i,1,"");
            i--;
        }
        else{
            s.insert(i,".");
            i++;
        }

    }
    cout<<s<<endl;
    return 0;
 }