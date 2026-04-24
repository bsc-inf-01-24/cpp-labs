#include <iostream>
using namespace std;

int main(){
    int NumberOfElements = 0;
    int* dynamicArray = nullptr;

    cout<<"How Many Number you like To Type?";
    cin>> NumberOfElements;

    dynamicArray = new int[NumberOfElements];
    if(dynamicArray== nullptr){
        cout<<"Error Memory Could not be Allocated.";
    } else{
        for (int i = 0; i < NumberOfElements; i++){
            cout<<"Enter A number: ";
            cin>>dynamicArray[i];

        }
        cout<< "You have Entered: ";
        for (int j = 0; j < NumberOfElements; j++){
            cout<<dynamicArray[j]<<",";
        }
        delete[] dynamicArray;
    }
        return 0;

    
}