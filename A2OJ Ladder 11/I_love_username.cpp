#include <iostream>
using namespace std;
 int main(){
     int n;
     cin>>n;
     int max,min,count=0,temp;
     cin>>temp;
     min=temp;
     max=temp;
     for(int i=1; i<n; i++){
         cin>>temp;
         if(temp>max){
            count++;
            max=temp;
         }
         else if(temp<min){
             count++;
             min=temp;
         }
     }

     cout<<count;

     return 0;
 }