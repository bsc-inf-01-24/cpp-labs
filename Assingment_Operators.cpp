#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int c;

    c = a;
    cout<<"Line 1 -value of c :"<< c <<endl;

    c += a;
    cout<<"Line 2 -value of c : "<< c<<endl;

    c -= a;
    cout<<"Line 3 -value of c :"<< c <<endl;

    c *= a;
    cout<<"Line 4 -value of c :"<< c <<endl;

    c /= a;
    cout<< "Line 5 -value of c : "<< c <<endl;

    c = 200;

    c %= a;
    cout<<"Line 6 -value of c :"<< c <<endl;

    c <<= 2;
    cout<<"Line 7 -value of c :"<< c <<endl;

    c >>= 2;
    cout<<"Line 8 -value of c :"<< c <<endl;

    c &= 2;
    cout<<"Line 9 -value of c :"<< c <<endl;

    c ^= 2;
    cout<<"Line 10 -value of c: "<< c <<endl;

    c != 2;
    cout<<"Line 11 -value of c :"<< c <<endl;

    return 0;

}
