#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the Number : ";
    cin >> N ;
    int i = 2;
    while( i < N ){
        if( N % i == 0 )
        {
            cout<<"Given No. "<<N<<" is not Prime number for "<<i<<endl;
        }
        else{
            cout<<"Given No. "<<N<<" is Prime number for "<<i<<endl;
        }
        i = i + 1 ;
    }
    return 0;
}