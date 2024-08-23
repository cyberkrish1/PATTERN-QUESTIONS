/*
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;
int main()
{
    int row,i,j,k;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=row;i>0;i--){
        for(k=row-i;k>0;k--){
            cout<<"  ";
        }

        for(j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}