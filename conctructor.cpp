#include<iostream>
using namespace std;
class Test
{
    public: Test()
    {
        cout<<"\n constructor implicitly called";
    }

};
int main()
{
    Test a;
    Test b;
    Test c;
    return 0;
}
