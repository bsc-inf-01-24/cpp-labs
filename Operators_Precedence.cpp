#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c/d;
    cout<<"Value of (a+b)*c/d is :"<<e <<endl;// 90

    e = ((a+b)* c)/d;
    cout<< "Value of ((a+b)* c)/ d is :"<<e <<endl;//90

    e = (a + b) * (c / d);
    cout<< "Value of ( a + b) * ( c / d) is :"<< e << endl;//90

    e = a + ( b * c) / d;
    cout<<"Value of a + ( b * c ) / d is :"<< e << endl;// 50

    return 0;

}