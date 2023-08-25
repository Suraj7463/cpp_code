#include<iostream>
using namespace std;
class Test
{
    public: ~Test() //destructor
    {
        cout<<"\n Destroy object.";
        //empty blodk
    }
    public :void showMsg()
    {
        cout<<"\n welcome to india";
    }
};
int main()
{
    Test t1;
    t1.showMsg();

    Test t2;
    t2.showMsg();

    return 0;
}
