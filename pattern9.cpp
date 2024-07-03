//cpp pattern 9

/*

*********
 *******
  *****
   ***
    *

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
     for(int i=0; i<5; i++){
        //space
       for(int j=0; j<i; j++){
            cout<<" ";
       }
       //star //2*n -(2*i+1)
       for(int j=0; j<(2*5-(2*i+1));j++){
            cout<<"*";
       }
       //space
       for(int j=0; j<i; j++){
            cout<<" ";
       }
        cout<<endl;
    }
}