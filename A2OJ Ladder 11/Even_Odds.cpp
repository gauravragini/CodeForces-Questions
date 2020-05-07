#include <iostream>
#include <map>

using namespace std;
 int main(){
     unsigned long long int n,k;
     cin>>n>>k;
     unsigned long long int even,odd;
     if(n%2==0){
        even=n/2;
        odd=n/2;
      }
     else {
         even=n/2;
         odd=n/2+1;
     }

     if(k<=odd){
         cout<<k*2-1<<endl;
     }
     else{
         k=k-odd;
         cout<<k*2<<endl;
     }

     
     return 0;
 }