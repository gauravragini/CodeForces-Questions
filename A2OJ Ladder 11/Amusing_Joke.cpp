/*#include <iostream>
using namespace std;
 int main(){
     string g,h,p;
     cin>>g>>h>>p;

     for(int i=0; i<g.length(); i++){
         for(int j=0;j<p.length(); j++){
             if(p[j]!='.')
                if(g[i]==p[j]){
                    p[j]='.';
                    g[i]='.';
                    break;
                }
         }
     }
   for(int i=0; i<h.length(); i++){
         for(int j=0;j<p.length(); j++){
             if(p[j]!='.')
                if(h[i]==p[j]){
                    p[j]='.';
                    h[i]='.';
                    break;
                }
         }
     }

    for(int i=0; i<g.length() ; i++ ){
        if(g[i] !='.'){
            cout<<"NO";
            exit(0);
        }

    }
    for(int i=0; i<h.length() ; i++ ){
        if(h[i] !='.'){
            cout<<"NO";
            exit(0);
        }

    }
    for(int i=0; i<p.length() ; i++ ){
        if(p[i] !='.'){
            cout<<"NO";
            exit(0);
        }

    }
    cout<<"YES";
     

     return 0;
 }*/

 #include <iostream>
using namespace std;
 int main(){
     string g,h,p;
     cin>>g>>h>>p;
      g=g+h;
      bool flag;
      if(g.length()==p.length()){
         for(int i=0; i<g.length(); i++){
            flag=true;
            for(int j=0;j<p.length(); j++){
                if(g[i]==p[j]){
                    p[j]='.';
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"NO";
                exit(0);
            }
        }
        cout<<"YES";      
      }
      else{
          cout<<"NO";
      }

     return 0;
 }