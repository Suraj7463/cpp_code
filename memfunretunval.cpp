#include<iostream>
using namespace std;
class Product
{
    private: int rate;
    private: int qty;
    private: string pname;
    private: int pid;

    public : void acceptdata()
    {
        cout<<"\n enter product id and name";
        cin>>pid>>pname;
        cout<<"\n enter product rate and qty";
        cin>>rate>>qty;
    }
    public : void showData()
    {
        cout<<"\n product id is "<<pid;
        cout<<"\n product name is "<<pname;
        cout<<"\n product rate is "<<rate;
        cout<<"\n product qty is :"<<qty;

    }
    public : int bill()
    {
        int bill=rate*qty;
        return bill;
    }

};
int main()
{
    Product p;
    p.acceptdata();
    p.showData();
    int t_bill = p.bill();
    cout<<"\n total bill is :"<<t_bill;
}
