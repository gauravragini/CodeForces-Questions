#include <iostream>

using namespace std;

int main(){
  int n,a,b,c;
  cin>>n;
  int d=0,e=1,fi, x=0,y=1;

  if(n==0){
    a=0;b=0;c=0;
    goto label;
  }
  if(n==1){
    a=0;b=0;c=1;
    goto label;
  }
  if(n==3){
    a=1;b=1;c=1;
    goto label;
  }

  while(true){
      
      fi=d+e;
      if(n==fi){
       c=e; 
       break;
      }
      d=e;
      e=fi;     
  }

  while(true){
      fi=x+y;
      if(d==fi){
       b=y;a=x; 
       break;
      }
      x=y;
      y=fi;     
  }
label:  cout<<a<<" "<<b<<" "<<c<<endl;
  return 0;
}