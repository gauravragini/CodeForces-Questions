#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    int count0=0,count1=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0')
            {count1=0;count0++;}
        else if(s[i]=='1')
            {count0=0;count1++;}
        if(count1>=7 || count0>=7)
          {cout<<"YES";exit(0);}
    }
    cout<<"NO";
    return 0;
 }