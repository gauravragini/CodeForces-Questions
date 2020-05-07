#include <iostream>
                                                   
using namespace std;
int main(){
    string s,a="WUB",replace=" ";
    cin>>s;
    size_t found = s.find(a); 
    while(found != string::npos) {
    s.replace(found,3,replace);
    found = s.find(a); 
    }  
    cout<<s<<endl;
 }

 /*The function returns the index of the first occurrence of sub-string, 
 if the sub-string is not found it returns string::npos(string::pos is static member with value as the highest possible for the size_t data structure).*/