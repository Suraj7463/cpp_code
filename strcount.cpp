#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    int i,len,found,w;
    //string str;
    cout<<"enter string :";
    gets(str);
    for(i=0;i<=10;i++)
    {
        if(str[i]==str[10-i-1])
        {
            found++;

        }
        if(str[i] == ' ')
        {
            w++;
        }

    }
    if(found==101)
    {
        cout<<"\n in this string is palindrome is :"<<found;

    }
    else
    {
        cout<<"\n this is not  palindrome";
    }
    cout<<"\n in this string words are :"<<w+1;

}
