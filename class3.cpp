#include<iostream>
using namespace std;
class TestSquarCube
{
    private : int n;
    public :void getData()
    {
        cout<<"enter the number :";
        cin>>n;
    }
    public :void square()
    {
        int s=n*n;
        cout<<"\n Square is "<<s<<endl;
    }
    public :void cube()
    {
        int c=n*n*n;
        cout<<"\n cube is "<<c<<endl;
    }
};
int main()
{
    TestSquarCube t;
    t.getData();
    t.cube();
    t.square();


    TestSquarCube t1;
    t1.getData();
    t1.square();
    t1.cube();

}
