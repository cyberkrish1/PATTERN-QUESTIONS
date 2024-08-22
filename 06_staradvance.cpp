#include<iostream>
using namespace std;


/*
    *
   **
  ***
 ****
*****

 */
// int main(){
//     int i,j,k;
//     for(i=1;i<6;i++){
//         for(j=1;j<=5-i;j++){
//             cout<<" ";
//         }
//         for(k=1;k<=i;k++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }
/*              or*/
// int main(){
//     int i,j,k,n;
//     cout<<"ENter Number Of Rows:";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(k=1;k<=i;k++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* 
    1
   22
  333
 4444
55555
*/
// int main(){
//     int i,j,k,n;
//     cout<<"Enter Number Of rows:";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(k=1;k<=i;k++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
    1
   22
  333
 4444
55555
*/

// int main(){
//     int i,j,k,n;
//     cout<<"Enter Number Of rows:";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(k=1;k<=i;k++){
//             cout<<k;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
    A
   AB
  ABC
 ABCD
ABCDE
*/


// int main(){
//     int i,j,k,n;
//     char alpha;
//     cout<<"Enter Number Of rows:";
//     cin>>n;
//     for(i=1;i<=n;i++){

//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(k=0;k<i;k++){
//             alpha='A'+k;
//             cout<<alpha;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
    1
   21
  321
 4321
54321 
*/

// int main(){
//     int i,j,k,n,num;
//     cout<<"Enter Number Of rows:";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(k=0;k<i;k++){
//             num=1+k;
//             cout<<num;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
    *    
   ***
  *****
 *******
*********

 */
// int main(){
//     int i,j,k,l;
//     for(i=1;i<=5;i++){
//         for ( j=1;j<=5-i;j++)
//         {
//             cout<<" ";
//         }
//         for(k=1;k<=i;k++){
//             cout<<'*';
//         }
//         for(l=1;l<i;l++){
//             cout<<'*';
//         }
//         cout<<endl;
        
//     }
// }
 /*     or          */
//  int main(){
//     int i,j,k,l,num;
//     cout<<"Enter Number of Rows:";
//     cin>>num;
//     for(i=1;i<=num;i++){
//         for ( j=1;j<=num-i;j++)
//         {
//             cout<<" ";
//         }
//         for(k=1;k<=i;k++){
//             cout<<'*';
//         }
//         for(l=1;l<i;l++){
//             cout<<'*';
//         }
//         cout<<endl;
        
//     }
// }
/*   oir        */
// int main(){
//     int i,j,k,num;
//     cout<<"Enter Number Of Rows:";
//     cin>>num;
//     for(i=1;i<=num;i++){
//         for(j=1;j<=num-i;j++){
//             cout<<" ";
//         }
//         for(k=1;k<=(2*i)-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }




  /*
    1
   121
  12321
 1234321
123454321
*/


// int main(){
//     int row,col,k,num;
//     cout<<"Enter Number Of Rows:";
//     cin>>num;
//     for(row=1;row<=num;row++){
//         for(col=1;col<=5-row;col++){
//             cout<<" ";
//         }
//         for(k=1;k<=row;k++){
//             cout<<k;
//         }
//         // for(int l=1;l<row;l++){
//         //     cout<<row-l;
//         // }
//         /*  or  */
//          for(col=row-1;col>=1;col--){
//             cout<<col;
//         }
//         cout<<endl;

//     }

//}

/* 
for n=5
*********
 *******
  *****
   ***
    *
*/
// int main(){
//     int num,row,col;
//     cout<<"Enter Number Of Rows:";
//     cin>>num;
//     for(row=num;row>0;row--){
//         for(col=1;col<=num-row;col++){
//             cout<<" ";
//         }
//         for(col=1;col<=(row*2)-1;col++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }


/*   
for n=4
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/
// int main(){
//     int row,col,num;
//     int count=0;//without this we can also do see code below
//     cout<<"Enter Number Of Rows:";
//     cin>>num;
//     for(row=num;row>0;row--){
//         count=count+1;//without this we can also do see code below
//         for(col=1;col<=row;col++){
//             cout<<'*';
            
//         }
//         // for(col=1;col<=(count*2)-2;col++){
//         //     cout<<" ";
//         // or }
//         for(col=1;col<=2*num-2*row;col++){
//             cout<<' ';
//         }
//         for(col=1;col<=row;col++){
//             cout<<'*';
            
//         }
//         cout<<endl;
//     }

//     for(row=1;row<=num;row++){
//         for(col=1;col<=row;col++){
//             cout<<'*';
//         }
//         for(col=1;col<=2*num-2*row;col++){
//             cout<<' ';
//         }
//         for(col=1;col<=row;col++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
*      *
**    **
***  ***
********
***  ***
**    **
*      * 

*/
// int main(){
//     int row,col,num;
//     int count=0;//without this we can also do see code below
//     cout<<"Enter Number Of Rows:";
//     cin>>num;
//     for(row=1;row<num;row++){
//         for(col=1;col<=row;col++){
//             cout<<'*';
//         }
//         for(col=1;col<=2*num-2*row;col++){
//             cout<<' ';
//         }
//         for(col=1;col<=row;col++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     for(row=num;row>0;row--){
//         count=count+1;//without this we can also do see code below
//         for(col=1;col<=row;col++){
//             cout<<'*';
            
//         }
//         // for(col=1;col<=(count*2)-2;col++){
//         //     cout<<" ";
//         // or }
//         for(col=1;col<=2*num-2*row;col++){
//             cout<<' ';
//         }
//         for(col=1;col<=row;col++){
//             cout<<'*';
            
//         }
//         cout<<endl;
//     }

    
//     return 0;
// }
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
int main(){
    int col,row,num;
    cout<<"Enter Number Of Rows:";
    cin>>num;
    for(row=1;row<=num;row++){
        for(col=1;col<=num-row;col++){
            cout<<' ';

        }
        for(col=1;col<=row;col++){
            cout<<"*"<<" ";
            }
        cout<<endl;
    }
    for(row=num;row>0;row--){
        for(col=1;col<=num-row;col++){
            cout<<' ';

        }
        for(col=1;col<=row;col++){
            cout<<"*"<<" ";
            }
        cout<<endl;
    }

    return 0;
}
