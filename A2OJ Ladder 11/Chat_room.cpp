#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int h[5]={0,0,0,0,0}; //corresponding to word hello 
    int j=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='h' && j==0){
            h[j]=1;
            j++;
        }
        else if(s[i]=='e' && j==1){
            h[j]=1;
            j++;
        }
        else if(s[i]=='l' && j==2){
            h[j]=1;
            j++;
        }
        else if(s[i]=='l' && j==3){
            h[j]=1;
            j++;
        }
        else if(s[i]=='o' && j==4){
            h[j]=1;
            j++;
        }
    }
    int sum=0;
    for(int i=0;i<5;i++)
       {sum+=h[i];}
    
    if(sum==5)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
 }