#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n],y[n],z[n];
    int i=0;
    int t=n;
    while(n--){
        cin>>x[i]>>y[i]>>z[i];
        i++;
    }
    
    int x_sum=0,y_sum=0,z_sum=0;
    x_sum = accumulate(x, x+t, x_sum);
    y_sum = accumulate(y, y+t, y_sum);
    z_sum = accumulate(z, z+t, z_sum);

     if(x_sum == 0 && y_sum == 0 && z_sum == 0)
        cout<<"YES";
    else
        cout<<"NO";


return 0;
}