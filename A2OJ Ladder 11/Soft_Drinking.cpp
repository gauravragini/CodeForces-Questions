#include <iostream>
#include <algorithm>
using namespace std;
 int main(){
     int n, k, l, c, d, p, nl, np;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;

     int n_slices= (c*d)/n;
     int n_salts= (p/np)/n;
     int n_drinks= ((k*l)/nl)/n;
      cout<<min(n_drinks,min(n_slices,n_salts));

     return 0;
 }