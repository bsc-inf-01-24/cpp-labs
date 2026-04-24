#include <iostream>
using namespace std;

int main(){
    int FirstValue;
    int SecondValue;

    int *pPointer = nullptr;

    //assign pointer with address of the first variable

    pPointer = &FirstValue;

    *pPointer = 10; //indirection;

    ////assign a pointer with address of the second variable

    pPointer = &SecondValue;
    *pPointer = 20; //indirection;

    cout << "First Value is "<<FirstValue<< '\n';
    cout << "Second Value is "<<SecondValue << '\n';

    return 0;


}