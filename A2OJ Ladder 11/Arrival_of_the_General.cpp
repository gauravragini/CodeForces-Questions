#include <iostream>
#include <algorithm>
using namespace std;
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++)
        {cin>>arr[i];}

      int max = *max_element(arr,arr+n); //finding max value
      int min = *min_element(arr,arr+n); //finding min value
     
      int first,last,count=0;
      //finding first occurance of max elemnet
      for(int i=0; i<n; i++){
         if(arr[i]==max)
           {first=i;break;}
      }
      //fimding last occurance of min
      for(int i=n-1; i>=0; i--){
         if(arr[i]==min)
           {last=i;break;}
      }

     if(last>first){
         cout<<first+(n-1-last);
     }
     else{
        cout<<first+((n-1)-(last+1));
     }

     return 0;
 }
