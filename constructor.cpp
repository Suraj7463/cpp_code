#include<iostream>
using namespace std;
class Amazon
{
    public:Amazon()
    {
        cout<<"\n constructor implicitly called";
    }
    public: void showdata()
    {

        cout<<"\n suraj,vaibhav";
        cout<<"\n ram";
    }
};
int main()
{
    Amazon a;
    a.showdata();
    return 0;
}
