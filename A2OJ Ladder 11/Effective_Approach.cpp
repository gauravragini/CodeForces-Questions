#include <iostream>
#include <unordered_map> 
using namespace std;
 int main(){
     unsigned long long int n,temp;
     cin>>n;
    unordered_map<unsigned long long int, unsigned long long int> umap; 
     for(unsigned long long int i=0;i<n; i++)
        {cin>>temp; umap[temp]=i;}
     unsigned long long int v_comp=0,p_comp=0;
     unsigned long long int m,b,index;
     cin>>m;
     for(unsigned long long int i=0;i<m; i++){
         cin>>b;
         index= umap.at(b);
         v_comp+=index+1;
         p_comp+=n-index;
     }
     cout<<v_comp<<" "<<p_comp;
     return 0;
 }