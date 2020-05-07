#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main(){
    string n,m;
    cin>>n>>m;
    for(int i=0; i<n.length(); i++){
       if(n[i]=='1' && m[i]== '0'||n[i]=='0' && m[i]== '1')
                cout<<"1";
       else if(n[i]=='1' && m[i]== '1'||n[i]=='0' && m[i]== '0')
                cout<<"0";
    }
    
return 0;
}