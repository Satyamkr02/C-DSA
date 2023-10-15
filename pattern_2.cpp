/* Print Pattern 111  
                 222
                 333 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N ;
    cout << "Enter No. of Rows(No. of Rows = No. of Columns) : ";
    cin >> N ;
    int i = 1 ;
    while( i <= N )
    {
        int j = 1 ;
        while( j <= N )
        {
            cout<<i;
            j = j+1;
        }
        cout << endl ;
        i = i+1;
    }
    return 0;
}