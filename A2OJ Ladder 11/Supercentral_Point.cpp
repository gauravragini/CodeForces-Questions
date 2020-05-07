#include <iostream>
#include <map>

using namespace std;
 int main(){
     int n,temp;
     cin>>n;
    int x[n],y[n];

    for(int i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
    }    

   int count=0;
    for(int i=0; i<n; i++){
        int r=0,l=0,t=0,b=0;
        for(int j=0;j<n;j++){
            if(x[i]==x[j] && y[i]>y[j])
                b++;
            else if(x[i]==x[j] && y[i]<y[j])
                t++;
            else if(y[i]==y[j] && x[i]>x[j])
               l++;
            else if(y[i]==y[j] && x[i]<x[j])
               r++;           
        }
        if(b>=1 && t>=1 && l>=1 && r>=1)
            count++;
    }  
    cout<<count<<endl;
     return 0;
 }