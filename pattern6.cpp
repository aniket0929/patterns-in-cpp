//cpp pattern 6

/*

12345
1234
123
12
1


*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
     for(int i=1; i<=6; i++){
        for(int j=1; j<6-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}