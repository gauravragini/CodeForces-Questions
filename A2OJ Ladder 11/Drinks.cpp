#include <iostream>
#include <iomanip>
using namespace std;
 int main(){
     int n;
     double temp, sum=0;
     cin>>n;

     for(int i=0; i<n; i++){
         cin>>temp;
         sum+=temp/100;
     }
     cout<<fixed;
     cout<<setprecision(12);
     cout<<(sum/n)*100;

     return 0;
 }