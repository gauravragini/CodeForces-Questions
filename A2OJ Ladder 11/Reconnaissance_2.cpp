#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;
 int main(){
     int n,temp,first;
     cin>>n;
     vector<int> v;
     cin>>first;
     int start=first;
     for(int i=0;i<n-1; i++){
        cin>>temp;
        v.push_back(abs(first-temp));
        first=temp;
        } 
     v.push_back(abs(start-first)); 


    int max= *min_element(v.begin(),v.end());
    auto it = find(v.begin(),v.end(),max);

    int index = it - v.begin();
    if(index == n-1)
      cout<<n <<" "<<1;
    else
        cout<<index+1<<" "<<index+2;
     return 0;
 }