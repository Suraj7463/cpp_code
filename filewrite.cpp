#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string pname;
    int rate,qty,bill;

    cout<<"Enter the product name:";
    cin>>pname;

    cout<<"Enter the product rate and Quantity :";
    cin>>rate>>qty;


    bill=rate * qty;

    fstream fname;
    fname.open("Billing.txt",ios::out);
    fname<<"\n product Name:"<<pname;
    fname<<"\n product Rate:"<<rate;
    fname<<"\n product Quantity:"<<qty;
    fname<<"\n product bill:"<<bill;

    cout<<"\n Data write inside file  and file created successfully";

    fname.close();
    return 0;
}
