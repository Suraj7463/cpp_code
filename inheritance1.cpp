#include<iosteram>
using namespace std;
class RBI_BANK
{

    protected : float h1_roi=0.6;
    protected : float b1_roi=0.7;
    protected : float car1_roi=0.8;

    protected : float sv_roi=0.4;
    protected : float fc_roi=0.10;
    public : void showROI()
    {
        cout<<"\n  home loan rate of interest"<<h1_roi;
        cout<<"\n Bike loan rate of interest "<<b1_roi;
        cout<<"\n car loan rate of intrest"<<car1_roi;

        cout<<"\n saving Account Rate of interest"<<sv_roi;
        cout<<"\n fixed deposit rate of interest "<<fd_roi;
    };
};
class Bank
{
    protected : string bankname;
    protected : string branchname;
    public : void acceptData()
    {

        cout<<"enter the bank name ";
        cin>>bankname;

        cout<<"enter the branch name";
        cin>>bganchname
    };
    public : void showInfo()
    {
        cout<<"the Bank name is "<<bankname;
        cout<<"the branch name is "<<branchname'
    }

};
class Customer_Bikeloan:Bank
{
    private : string cname;
    private : int b1_amt;
    private : int noy;
    public : void getdata()
    {

        cout<<"enter the customer name:";
        cin>>cname;
        cout<<"enter the customer bike loan amount:";
        cin>>b1_amt;

        cout<<"enter the customer
    };
};
int main()
{

    return 0;
}
