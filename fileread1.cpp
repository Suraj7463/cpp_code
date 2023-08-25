#include<iostream>a
#include<fstream>
using namespace std;
int main()
{
    fstream filename;
    filename.open("suraj.txt",ios::in);
    if(!filename)
    {
        cout<<"file location is not found";

    }
    else
    {
        char ch;
        while(filename)
        {
            filename>>ch;
            if(filename.eof())
            {
                break;
            }
            if(ch<="A" && ch>="Z")
            {
                cout<<filename;
            }
        }

    }
    return 0;
}
