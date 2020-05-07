#include <iostream>
#include <math.h>

using namespace std;
 int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int peri;
    peri=16*((x*y)/z + (x*z)/y + (y*z)/x + 2*(x+y+z));
    cout<<sqrt(peri)<<endl;
     
     return 0;
 }