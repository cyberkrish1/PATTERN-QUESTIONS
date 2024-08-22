/*
aaaaa
bbbbb
ccccc
ddddd
eeeee
*/

#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=0;i<row;i++){
        char alpha= 'a'+i;
        for(j=0;j<row;j++){
            cout<<alpha;
        }        
        cout<<endl;
    }
    return 0;
}