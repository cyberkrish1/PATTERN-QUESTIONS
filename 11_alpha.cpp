/*
a
bb
ccc
dddd
eeeee

Run this in online compiler sometimes problem in vs code
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=0;i<row;i++){
        char alph='a'+i;
        
        for(j=0;j<=i;j++){
            cout<<alph;
        }
        cout<<endl;
    }

    return 0;
}