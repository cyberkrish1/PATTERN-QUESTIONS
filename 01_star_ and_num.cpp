

/*
    *
   **
  ***
 ****
*****
*/

//And

//And
/*

*****
****
***
**
*

/*
    1
   22
  333
 4444
55555 */

//1st Part

// #include<iostream>

// using namespace std;
// int main()
// {
//     int rows,i,j,k;
//     cout<<"Enter no.of rows:";
//     cin>>rows;
//     for(i=0;i<rows;i++){
//             for(k=0;k<=rows-i-1;k++){
//                 cout<<" ";
//             }
//             for(j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//2nd Part

// #include<iostream>

// using namespace std;
// int main()
// {
//     int rows,i,j,k;
//     cout<<"Enter no.of rows:";
//     cin>>rows;
//     for(i=0;i<rows;i++){
//             for(k=rows;k>i;k--){
//                 cout<<"*";
//             }
        
//         cout<<"\n";
//     }
//     return 0;
// }

//3rd 


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
            cout<<i+1;
        }
        cout<<"\n";
    }
    return 0;
}

