#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string line;
    ifstream myfile("example.txt");

    if(myfile.is_open()){
        {
     while (getline(myfile,line))
     cout<<line<<'\n';
        /* code */
     }myfile.close();
     
    }else{
        cout<<"unable to open the file";
    }
    return 0;
}