/*
    *
   **
  ***
 ****
*****
*/
#include<iostream>

using namespace std;
int main()
{
    int rows,i,j,k;
    cout<<"Enter no.of rows:";
    cin>>rows;
    for(i=0;i<rows;i++){
            for(k=0;k<=rows-i-1;k++){
                cout<<" ";
            }
            for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}