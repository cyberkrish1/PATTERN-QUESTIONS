/*
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
*/

#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=0;i<row;i++){
        for(j=1;j<=row;j++){
            cout<<j*j<<" ";
        }        
        cout<<endl;
    }
    return 0;
}