#include <iostream>
using namespace std;

int main(){

    //null pointer
    int *pPointer = nullptr;
    int numbersArray[3] = {10 , 20 ,30};

    //assign address of the first element to the pointer
    pPointer = numbersArray;

    //output the address of the first element
    cout<<"Address at the pointer"<<pPointer <<endl;
    cout<<"Adress of numbersArray[0]"<< numbersArray<<endl;

//output the value of the first element using the pointer and indirection
cout<<"value at pPointer:"<< *pPointer <<endl;

// This ouputs the value of the second element
cout<<"The second element is :"<<*(++pPointer)<<endl;

//assign adresss of the first element to the pointer
pPointer = numbersArray;

//This ouputs the value of the first element
cout<< "The Value at *pPointer++:" <<*(pPointer++) <<endl;

return 0;
}