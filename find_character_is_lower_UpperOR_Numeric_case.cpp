/* Lower Case ---> a to z( 97 to 122)
   Upper Case ---> A to Z( 65 to 90 )
   Numeric Case ---> 0 to 9( 48 to 57 )  */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x ;
    
    cout<<"Enter value : ";
    cin >> x ;
    int y = int(x) ;

    if ( y >= 48 and y <= 57 )
    {
        cout<<"Given Value is Numeric Case"<<endl;
    }
    else if( y >= 65 and y <= 90 )
    {
        cout<<"Given Value is Upper Case"<<endl;
    }
    else if( y >= 97 and y <= 122 )
    {
        cout<<"Given Value is Lower Case"<<endl;
    }
    else{
        cout<<"Given Value is Neither lower case , upper case nor numeric case(btw 0 to 9)."<<endl;
    }

    return 0;
}