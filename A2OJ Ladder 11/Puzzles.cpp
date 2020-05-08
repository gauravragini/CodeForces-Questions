#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int p[m];
    for(int i=0;i<m;i++)
        cin>>p[i];
    sort(p,p+m);   
    int d=9999;
    for(int i=0;i<m-n+1;i++){
        if(p[i+(n-1)]-p[i]<=d){
            d=p[i+(n-1)]-p[i];
        }
    }
    cout<<d<<endl;

    return 0;
 }