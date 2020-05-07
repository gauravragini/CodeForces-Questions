#include <iostream>
#include <vector>

using namespace std;
 int main(){
     int n,temp,sum=0;
     cin>>n;
      vector<int> v;
     for(int i=1;i<=7; i++)
        {cin>>temp; v.push_back(temp);}  

    while(true){
        for(int i=0;i<7;i++){
            sum+=v[i];
            if(sum<n){
                continue;
            }
            else{
                cout<<i+1;
                exit(0);
            }
        }
    }
     return 0;
 }