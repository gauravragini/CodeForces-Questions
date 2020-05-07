#include <iostream>
using namespace std;
 int main(){
     int n,temp;
     cin>>n;
     int sum=0;
     for(int i=0; i<n; i++){
         cin>>temp;
         sum+=temp;
     }
     n=n+1;
    int i=1,count=0;
    while(i<=(5+sum)){

    if((1+n*i)>=(1+sum) && (1+n*i)<=(5+sum)){
        count++;
    }
    i++;
    
    }

    cout<<(5-count)<<endl;

     return 0;
 }