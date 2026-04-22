#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("Afile.txt");
    cout<<"Writting To the File:"<<endl;
    cout<<"Enter Your Name: "<<endl;
    cin.getline(data, 100);

    outfile<< data <<endl;

    cout<<"Enter Your age:"<<endl;
    cin>>data;
    cin.ignore();

    outfile<<data<<endl;

    outfile.close();

    ifstream infile;
    infile.open("afile.txt");

    cout<<"Reading from the file";
    infile>>data;

    cout<<data<<endl;

    infile>>data;
    cout<<data<<endl;

    infile.close();
     
    return 0;


}