#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    fstream fname;
    fname.open("details.txt",ios::in);
    if((!fname))
    {
        cout<<"file not exite";
    }
    else{
        char word;

        while(fanme>>word)
        {
            cout<<word<<endl;
            c++;
        }
    }
    cout<<"\n total number of words is:"<<c;
    return 0;
}
