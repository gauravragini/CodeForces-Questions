#include <iostream>
#include <map>

using namespace std;
int main(){
  int n,m;
  cin>>n;
  int a[n]; 
  for(int i=0;i<n;i++)
    cin>>a[i];
  cin>>m;
  int b[m];
  for(int i=0;i<m;i++)
    cin>>b[i];
  int max=0,count=0,temp;
  for(int i=0; i<n; i++)
  {
      for(int j=0; j<m;j++){
          if(b[j]%a[i]==0){
              temp=b[j]/a[i];
              if(temp>max)
                  { max=temp; count=1; }
              else if(temp==max)
                  count++;
          }
      }
  }
  cout<<count<<endl;
     return 0;
 }