#include<iostream>
using namespace std;
class collage
{
    protected:string collagename="suraj";
    protected:string city="pune";
    public:void getdata()
    {
        cout<<"\n enter collage name"<<endl;
        cin>>collagename;
        cout<<"\n enter city name"<<endl;
        cin>>city;
    }
};
class collagedata:collage
{
    public:void showdata()

    {

        cout<<"\n collage name="<<collagename;
        cout<<"\n city name is="<<city;
    }

};
int main()
{
    collagedata obj;
    obj.showdata();
    return 0;
}
