//cpp pattern 7


/*

11111
2222
333
44
5

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
     for(int i=1; i<=6; i++){
        for(int j=1; j<6-i+1; j++){
            cout<<i;
        }
        cout<<endl;
    }
}