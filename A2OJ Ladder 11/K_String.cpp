#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int k;
    string s;
    unordered_map<char,int> mp;
    cin>>k>>s;
    for(int i=0; i<s.length();i++){
       auto itr= mp.find(s[i]);
       if(itr!=mp.end())
            itr->second++;
       else
         mp[s[i]]=1;
    }
     bool flag=true;
     for (auto itr = mp.begin(); itr != mp.end(); itr++) 
       { if((itr->second)%k!=0)
           { flag=false;break;}
       }
     if(flag){
        for(int i=0;i<k;i++){
        for (auto itr = mp.begin(); itr != mp.end(); itr++){
            int m=itr->second/k;
            for(int j=0;j<m;j++)
                cout<< itr->first;
            }
        }
     }
     else{
         cout<<-1<<endl;
     }

    return 0;
 }