#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
      for(int j=0; j<=(n-i); j++){
          if(j<(n-i))
            cout<<"  ";
          else{
              for(int k=0;k<i;k++)
                 cout<<k<<" ";
              for(int k=i;k>=0;k--)
                {if(k==0) cout<<k;
                else cout<<k<<" "; } 
          }  
      }
      cout<<endl;
    }
    for(int i=n-1; i>=0; i--){
      for(int j=0; j<=(n-i); j++){
          if(j<(n-i))
            cout<<"  ";
          else{
              for(int k=0;k<i;k++)
                 cout<<k<<" ";
              for(int k=i;k>=0;k--)
              {if(k==0) cout<<k;
                else cout<<k<<" "; } 
          }  
      }
      cout<<endl;
    }
  
     

    return 0;
 }