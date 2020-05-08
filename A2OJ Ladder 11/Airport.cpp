#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,m,temp;
    cin>>n>>m;
    vector<int> v1;
    vector<int> v2;
    for(int i=0; i<m; i++){
        cin>>temp;
        v1.push_back(temp);
        v2.push_back(temp);
        }
    int max=0,min=0,count=0;
    int max_e,index,min_e;
    while(count!=n){
         max_e= *max_element(v1.begin(),v1.end());
         max+=max_e;
         auto itr = find(v1.begin(),v1.end(),max_e);
         index=itr-v1.begin();
         v1[index]=v1[index]-1;
         count++;
    }
    count=0;
     while(count!=n){
         min_e= *min_element(v2.begin(),v2.end());
         min+=min_e;
         auto itr = find(v2.begin(),v2.end(),min_e);
         index=itr-v2.begin();
         v2[index]=v2[index]-1;
         if(v2[index]==0){
             v2[index]=9999;
         }
         count++;
    }
    cout<<max<<" "<<min;
    return 0;
 } 