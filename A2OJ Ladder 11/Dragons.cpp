#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    int dragon_strength,bonus;
    vector< pair<int,int> > v;
    for(int i=0; i<n; i++){
        cin>>dragon_strength;
        cin>>bonus;
        v.push_back(make_pair(dragon_strength,bonus));
    }
    sort(v.begin(),v.end());
    bool flag=true;
    for(auto itr=v.begin(); itr!=v.end(); itr++){
        if(s>(itr->first)){
            s+=itr->second;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
 }