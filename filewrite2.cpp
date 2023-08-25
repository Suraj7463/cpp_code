#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fs;
    fs.open("Data.txt",ios::in);//open file for reading purpose
    if(!fs)// to check file exist or not
    {
        cout<<"file location not found";
    }
    else
    {
        cout<<"file is available";
    }
    return 0;
}
