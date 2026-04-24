#include <iostream>
using namespace std;

int main()
{
    int numberArray[5];
    int *pPointer = nullptr;

    //Assign the pointer to the address of the first element in an array
    pPointer = numberArray;

    //Assing a value to the first element indirectly

    *pPointer = 10;

    /*increement the pointer using pointer arithmetic to assign the adress to the
    second element to the pointer*/

    pPointer++;

    *pPointer = 20;

    //assign the address of the third element to the pointer

    pPointer = &numberArray[2];

    *pPointer = 30;

    // assign the address of the fourth element to the pointer using number arithmetic

    pPointer = numberArray + 3;
    *pPointer = 40;

    //assign the adress of the first element to the pointer

    pPointer = numberArray;

    /*assign value to the fifth element of an array using indirection and pointer to pointer arithmetic*/
    *(pPointer +4 ) = 50;

    for (int n = 0; n < 5; n++)
    {
        cout<<numberArray[n] << ",";
    
    }

return 0;

}