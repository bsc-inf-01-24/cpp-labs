#include <iostream>
using namespace std;

int main(){
    int x = 3;
    //the value of  x is increased before it is assigned to y
    //hence y take the new increased value of x

    int y = ++x;
    cout<< " x :" << x <<endl;
    cout<< " y :" << y <<endl;

    return 0;
    
}