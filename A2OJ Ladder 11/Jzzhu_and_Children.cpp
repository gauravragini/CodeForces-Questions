#include <iostream>
#include <vector>
#include <map> 
using namespace std;
 int main(){
     int n,m,temp;
     cin>>n>>m;
     map <int, int> umap; 
     vector<int> v;
     for(int i=1;i<=n; i++)
        {cin>>temp; umap[i]=temp;}
    int last=n;
    int key,value;

    while(!umap.empty()){

         for(auto x:umap) {
             value=x.second-m;
             key=x.first;
             if(value<=0)
                    {v.push_back(key);}
             else
             {
                 umap[key]=value;
                  last=key;
             } 
         }

        for(int i=0;i<v.size();i++){
            key=v[i];
           umap.erase(key); 
        }   
    }   
     cout<<last<<endl;
     return 0;
 }