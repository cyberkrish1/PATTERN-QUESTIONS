/*
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
* * *     * * * 
* *         * * 
*             *
*/

#include<iostream>
using namespace std;
int main()
{
    int num,i,j,k;
    cout<<"Enter Number:";
    cin>>num;
    //first 4 row
    for(i=1;i<num;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(j=1;j<=2*(num-i);j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //second 4 row
    for(i=num;i>0;i--){
        //1st part
        for(j=i;j>0;j--){
            cout<<"* ";
        }
        //2nd part
        for(j=1;j<=2*(num-i);j++){
            cout<<"  ";
        }
        //3rd part
        for(j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;

    }
    
    
    return 0;
}

