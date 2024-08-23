/*
    5
   54
  543
 5432
54321

*/
//And 

/*

    1
   21
  321
 4321
54321

*/

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
            for(j=rows;j>k;j--){
                cout<<j;
                
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
            for(j=i+1;j>0;j--){
                cout<<j;
                
        }
        cout<<"\n";
    }
    return 0;
}