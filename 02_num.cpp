/*
11111
22222
33333
44444
55555
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            cout<<i+1;
        }        
        cout<<endl;
    }
    return 0;
}