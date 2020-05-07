#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int m[6][6];
    int x,y;

    for(int i=1;i<6;i++){
        for(int j=1; j<6;j++){
            cin>>m[i][j];
            if(m[i][j] == 1){
                x=i;y=j;
            }
        }
    }
    int res = abs(3-x)+abs(3-y);
    cout<<res<<endl;
return 0;
}