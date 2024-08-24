/* 
   * 
  * *  
 * * *
* * * *
* * * *
 * * *
  * *  
   * 
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j,k;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<row-i+1;j++){
            cout<<" ";

        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=row;i>0;i--){
        for(j=1;j<row-i+1;j++){
            cout<<" ";

        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
