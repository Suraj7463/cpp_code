#include<iostream>
using namespace std;
class box
    {
        private:int l,b,h;

        public:void getData()
        {
            cout<<"\n enter the value for l,b,h";
            cin>>l>>b>>h;
        }
        public:void volume()
        {
            int v=l*b*h;
            cout<<"\n volume of box is"<<v;
        }
    };
int main()
{
    box b1;
    b1.getData();
    b1.volume();
    return 0;
}
