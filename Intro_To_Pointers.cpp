#include <iostream>
using namespace std;

int main(){

    //declare a pointer and initialize it
    //so that it does store a random address
    int *pPointer = nullptr;

    int integerVar = 5;

    //assing a pointer to the address of the object i.e integerVar

    pPointer = &integerVar;

    //output the value of integervar
    cout<<"IntegerVar: "<<integerVar<<endl;

    //output the address of integervar
    cout<<"Adress of Integervar :" <<&integerVar<<endl;

    //output the address assigned to a pointer
    cout<<"pPointer: "<< pPointer <<endl;

    //output the address of a pointer
    cout<<"Address of a pointer :"<<&pPointer<<endl;

    return 0;
}