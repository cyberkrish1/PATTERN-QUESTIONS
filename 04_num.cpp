/*
Descending Pattern
54321
54321
54321
54321
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=0;i<row;i++){
        for(j=row;j>0;j--){
            cout<<j<<" ";
        }        
        cout<<endl;
    }
    return 0;
}