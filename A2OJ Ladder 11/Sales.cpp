#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,m,temp;
  cin>>n>>m;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  sort(a,a+n);
  int sum=0;
  for(int i=0; i<m; i++){
      if(a[i]<=0){
          sum+=a[i];
      }
  }
  cout<<abs(sum)<<endl;

     return 0;
 }