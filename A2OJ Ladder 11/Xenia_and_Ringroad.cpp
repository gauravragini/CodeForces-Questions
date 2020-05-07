#include <iostream>
using namespace std;

int main(){
  unsigned long long int n,m,temp,time=0,prev=1;
  cin>>n>>m;
  for(int i=0;i<m;i++ ){
      cin>>temp;
      if(temp>prev){
        time+=temp-prev;
      }
      else if(temp<prev){
          time+=(n-prev);
          time+=1;
          time+=(temp-1);
      }
      prev=temp;
  }
  cout<<time;
  return 0;
}