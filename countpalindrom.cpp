#include<iostream>
//#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool checkPalin(string word)
{
    int n=word.length();
    //word=word.toLowerCase();
    for(int i=0;i<n;i++,n--)
    {
        if(word.at(i) != word.at(n-1))
        {
            return false;

        }
        return true;
    }
}
static int countPalin(string str)
{
    str=str+" ";

    string word = "";
    int count=0;
    int w=0;
    for(int i=0; i < str.length(); i++)
    {
        char ch=str.at(i);
        if(ch != ' ')
            word=word + ch;
        else{
            if(checkPalin(word))
                count++;
                w++;
            word = "";

        }

    }
    cout<<"\n total words in string are "<<w<<endl;
    cout<<"\n total palindromes in string are:";
    return count;
}
int main()
{
    int w=0;
    cout<<countPalin("madam arora teaches malayalam dad nitin")<<endl;
    //cout<<countPalin("nitin speaks malayalam")<<endl;
}
