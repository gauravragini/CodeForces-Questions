#include <iostream>
using namespace std;
int main (){
   int lights[3][3] = {1,1,1,1,1,1,1,1,1};
   
    int temp;
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            cin>>temp;
            if(temp%2!=0){
                lights[i][j]=!lights[i][j];
                if(j+1<3)
                    lights[i][j+1]=!lights[i][j+1];
                if(j-1>=0)
                    lights[i][j-1]=!lights[i][j-1];
                if(i-1>=0)
                    lights[i-1][j]=!lights[i-1][j];
                if(i+1<3)
                    lights[i+1][j]=!lights[i+1][j];
            }
            }
        }
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            cout<<lights[i][j];}
            cout<<"\n";
    }
   return 0;
}