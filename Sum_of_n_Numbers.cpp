#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the value of N : ";
    cin >> N ;
    int i = 1 ;
    int sum = 0 ;
    while(i <= N)
    {
        sum =sum + i;
        i = i + 1 ;
    }
    cout<<"Sum of "<<N<<" number = "<<sum;
    return 0;
}