#include<iostream>
using namespace std;
class Test
{
    public: static int square(int n)
    {
        return n*n;
    };
    public: static int cube(int n)
    {
        int c=n*n*n;
        return c;
    }
};
int main()
{
    cout<<"\n\n square is :"<<Test :: square(4);
    int c=Test :: cube(5);
    cout<<"\n\n cube is:"<<c;

}
