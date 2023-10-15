#include<iostream>
using namespace std;
int main()
{
    /* int a , b ;
    cin >> a ;
    cin >> b ;
    if(a>0) // If a is positive
    {
        cout << "A is positive number"<< endl;
    }
    else{ // if a is negative
        cout<<"A is Negative number"<<endl;
    }
    if(b>0) // If b is positive
    {
        cout<<"B is Positive number"<< endl;
    }
    else{ // If b is negative
        cout<<"B is Negative number"<<endl;
    } */

    int a , b ;

    cout << "Enter the value of A : ";
    cin >> a ;
    cout << "Enter the value of B : ";
    cin >> b ;

    if( a > b )
    {
        cout<<"A is Greater than B";
    }
    if( b > a )
    {
        cout<<"B is Greater than A";
    }
    return 0;
}