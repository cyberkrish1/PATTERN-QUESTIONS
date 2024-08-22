/*
1
21
321
4321
54321
*/

#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter num Of Rows:";
    cin>>row;
    for(i=0;i<row;i++){
        for(j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}