/*
1
12
123
1234
12345
*/

// And
/*
1
22
333
4444
55555
*/

//1st part

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

//2nd part

#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Number Of Rows:";
    cin>>row;
    for(i=0;i<row;i++){
       
        for(j=0;j<=i;j++){
            cout<<i+1;

        }        
        cout<<endl;
    }
    return 0;
}

