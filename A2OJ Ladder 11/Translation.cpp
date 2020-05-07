#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  string t,s;
  cin>>s>>t;
  reverse(s.begin(), s.end()); 
  int x = s.compare(t);
  if(x == 0)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
     return 0;
 }