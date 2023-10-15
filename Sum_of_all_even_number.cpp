// Sum of all even Number till N.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N ;
    cout << "Enter value of N : ";
    cin >> N ;
    int i = 0;
    int sum = 0 ;
    while( i<=N ){
        sum = sum + i ;
        i = i+2;
    }
    cout<<"Sum of all even no. till "<<N<<" : "<<sum;
    return 0;
}