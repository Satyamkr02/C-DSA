// No. of Rows is equals to No. of Columns.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N ;
    cout << "Enter the no. of rows(rows = column) : ";
    cin >> N;
    int i = 1 ;

    while(i <= N )
    {
        int j = 1 ;
        while(j <= N )
        {
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    return 0;
}