/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include<iostream>
using namespace std;
int main()
{
    int row,i,j,sum=0;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=0;i<row;i++){
       
        for(j=0;j<row;j++){
            sum=sum+1;
            cout<<sum<<" ";

        }        
        cout<<endl;
    }
    return 0;
}

