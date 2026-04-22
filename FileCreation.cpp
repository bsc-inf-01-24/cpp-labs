#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream MyFile("exampleFile.txt");// create and open a text file

    MyFile.close();// close the file

    return 0;
}