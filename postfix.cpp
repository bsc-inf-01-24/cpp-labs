#include <iostream>
using namespace std;

int main(){

    int x = 3;

    //the value of x is increased after the initial value of x is already assigned to y
    // the value of y remains the un increased value of x
    
    int y = x++;

    cout<< "x: "<< x <<endl;
    cout<<"y: "<< y <<endl;

    return 0;
}