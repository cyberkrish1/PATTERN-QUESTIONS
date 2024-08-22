/*
1
12
123
1234
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
       
        for(j=0;j<=i;j++){
            cout<<j+1;

        }        
        cout<<endl;
    }
    return 0;
}