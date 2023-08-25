#include<iostream>
using namespace std;
class stackarr
{

    stackarr(int n)
    {
        sarr[n];
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            cout<<"stack is empty or underflow";
        }
    }
    bool isFull()
    {
        if(top=len(sarr)-1)
        {
            cout<<"stack is full or overflow";
        }
    }
int main()
{
    int sarr[];
    int top;
    int choice,ele,n;
    cout<<"enter size of arr"<<endl;
    cin>>n;
    cout<<"1.push\n 2.pop\n 3.display\n 4.peek"<<endl;
    stckarr obj=stackarr(5);
    cout<<"enter choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: if(isEmpty())
                {
                    cout<<"stack is empty or underflow"<<endl;
                }
    }

}


};
