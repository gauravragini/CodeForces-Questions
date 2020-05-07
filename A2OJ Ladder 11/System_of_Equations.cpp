#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n,m,temp;
  cin>>n>>m;
  int a,b,count=0;
      a=floor(sqrt(n));
      b=floor(sqrt(m));
      for(int i=0;i<=a;i++){
          for(int j=0;j<=b;j++){
              if(((i*i)+j==n) && (i+(j*j)==m)){
                  count++;
              }
          }
      }

      cout<<count<<endl;
  
     return 0;
 }