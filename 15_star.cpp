/*
     *
    ***
   *****
  *******
 *********
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=i;j<row;j++){
            cout<<"  ";
        }
        for(int k=1;k<2*i;k++){
            cout<<"* ";
        }
        cout<<"\n";
        
    }
    return 0;
}