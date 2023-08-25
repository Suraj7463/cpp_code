#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fs;
    fs.open("details.txt",ios::in);
    if(!fs)
    {
        cout<<"file location not found";
    }
    else
    {
        char ch;
        while(fs)
        {

            fs>>ch;
            if(fs.eof())
            {
                break;
            }
            cout<<ch;
        }// end of while
    }
    return 0;
}
