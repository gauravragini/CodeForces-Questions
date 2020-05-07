#include <iostream>
using namespace std;
int main (){
   int year;
   cin>>year;

   while(year++){
   int n=year;
   int arr[4];
   int i=0,j,k,check,count=0;

   while(n>0){
        arr[i]=n%10;
        n=n/10;
        i++;
   }

   for(j=0;j<4;j++)
   {
    check=0;
    for(k=0;k<4;k++)
    {
          if(j!=k)
          {
           if(arr[j]==arr[k])
           {
            check++;
           }
          } 
    }
    if(check==0)
     {
        count++;
     }
   }

   if(count==4){
     cout<<year;
     exit(0) ;
   }
   }
     
   return 0;
}