#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int k,count=0,sum=0;
  cin>>k;
  int a[12];
  for(int i=0;i<12;i++){
      cin>>a[i];
  }
  sort(a,a+12,greater<int>());
  int i=0;
  while(sum<k){
      sum+=a[i++];
      if(i==13){
          i=-1;break;
      }
  }
  if(k>sum){
      cout<<-1<<endl;
      exit(0);
  }
  cout<<i<<endl;
     return 0;
 }