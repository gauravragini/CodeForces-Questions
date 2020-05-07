#include <iostream>
using namespace std;
 int main(){
     int n;
     cin>>n;
     int cap=0;
     int entry,exit,current=0;
     for(int i=0; i<n; i++){
         cin>>exit>>entry;
         current= current-exit+entry;
         if(current>cap){
             cap=current;
         }
     }

     cout<<cap;

     return 0;
 }