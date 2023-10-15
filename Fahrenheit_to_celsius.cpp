#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double F;
    cout<<"Enter the value of Fahrenheit : ";
    cin >> F ;
    double C = 5*(F-32)/9;
    cout<<"Temperature in Celsius = "<<C<<endl;
    return 0;
}