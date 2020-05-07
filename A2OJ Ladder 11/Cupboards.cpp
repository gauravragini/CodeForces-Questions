#include <iostream>
#include<algorithm> 

using namespace std;
 int main(){
     int n;
     cin>>n;
     int l,r,l_0=0,l_1=0,r_0=0,r_1=0;
     for(int i=0; i<n; i++){
         cin>>l;
         if(l==0)
           l_0++;
         else
            l_1++;

         cin>>r;
         if(r==0)
            r_0++;
         else
            r_1++;
     }

     cout<<min(l_0,l_1)+min(r_0,r_1);      

    
     return 0;
 }