#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    int i,len;
    int found=0;
    cout<<"Enter the String:";
    cin>>name;

    len=name.length();
    for(i=0; i<len; i++)
    {
        if(name[i]!=name[len-i-1])
        {
            found=101;
            break;
        }
    }
    if(found==101)
    {
        cout<<"\n The String is not palindrome ";
    }
    else
    {
        cout<<"\n the string is palindrome";
    }
    return 0;
}
