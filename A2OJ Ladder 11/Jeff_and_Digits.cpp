#include <iostream>
using namespace std;

int main(){
  int n,temp;
  cin>>n;
  int count5=0,count0=0,sum=0;
  for(int i=0;i<n;i++){
     cin>>temp;
     sum+=temp;
     if(temp==5)
        count5++;
     else if(temp==0)
        count0++; 
  }
  if(count0==0)
      cout<<-1<<endl;
  else if(count5>=9){
      temp=count5/9;
      for(int i=0;i<temp;i++){
          cout<<555555555;
      }
      for(int i=0; i<count0;i++)
        cout<<0;
  }
  else{
      cout<<0;
  }
  return 0;
}