/*
    A
   BB
  CCC
 DDDD
EEEEE 

*/
//AND
/*
    A
   AB
  ABC
 ABCD
ABCDE 
*/

//1ST PART

#include<iostream>

using namespace std;
int main()
{
    int rows,i,j,k;
    cout<<"Enter no.of rows:";
    cin>>rows;
    for(i=0;i<rows;i++){
        char alpha='A'+i;
            for(k=0;k<rows-i-1;k++){
                cout<<" ";
            }
            for(j=0;j<=i;j++){
            cout<<alpha;
        }
        cout<<"\n";
    }
    return 0;
}

//2nd Part

#include<iostream>

using namespace std;
int main()
{
    int rows,i,j,k;
    cout<<"Enter no.of rows:";
    cin>>rows;
    for(i=0;i<rows;i++){
            for(k=0;k<rows-i-1;k++){
                
                cout<<" ";
            }
            for(j=0;j<=i;j++){
                char alpha='A'+j;
                cout<<alpha;
        }
        cout<<"\n";
    }
    return 0;
}

