/*
12345
12345
12345
12345
12345
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
            cout<<j+1<<" ";
        }        
        cout<<endl;
    }
    return 0;
}