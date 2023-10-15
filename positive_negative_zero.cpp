// Checking Given number is positive , negative or zero.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   /*
    int x ;
    cout << "Enter the value of No. X : ";
    cin >> x ;
    if( x > 0 )
    {
        cout<<"Given No. X is Positive.";
    }
    else if( x < 0 )
    {
        cout<<"Given No. X is Negative.";
    }
    else{
        cout<<"Given No. X is Zero.";
    } */

    int x ;
    cout << "Enter the value of No. X : ";
    cin >> x ;
    if( x > 0 )
    {
        cout<<"Given No. X is Positive.";
    }
    else{
        if( x < 0 )
        {
            cout<<"Given No. X is Negative.";
        }
        else{
            cout<<"Given No. X is Zero.";
        }
    }

    return 0;
}