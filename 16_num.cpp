/*
     1
    121
   12321
  1234321
 123454321

*/

#include<iostream>
using namespace std;
int main()
{
    int row,i,j,k;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=i;j<row;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int l=i-1;l>0;l-- ){
            cout<<l<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}