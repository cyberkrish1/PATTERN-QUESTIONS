/*
12345
1234
123
12
1
*/
//And
/*
54321
5432
543
54
5
*/
//And
/*
5
54
543
5432
54321
*/

//1st Part
#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=row;i>0;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

//2nd part

#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=1;i<row+1;i++){
        for(j=row;j>i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

//3rd part

#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=0;i<row;i++){
        for(j=row;j>i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}