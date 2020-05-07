#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n,index;
  cin>>n;
int temp,min=1000000000;
vector <int> v;
  for(int i=0; i<n; i++){
      cin>>temp;
      v.push_back(temp);
      if(temp<=min){
          min=temp;
          index=i;
      }
  }
  int count=0;
  for(int i=0;i<n; i++){
      if(v[i]==min)
      count++;
  }
  if(count==1)
        cout<<index+1<<endl;
  else
  {
      cout<<"Still Rozdil"<<endl;
  }
  
  return 0;
}