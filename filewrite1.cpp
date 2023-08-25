#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   fstream fname;
   fname.open("details.txt",ios::out);
   fname<<"\n suraj duhabhate";
   fname<<"\n ram chavan";
   fname<<"\n ganesh bhosale";
   fname<<"\n ravi patil";
   fname.close();

   cout<<"\n file is createc successfully";
   return 0;
}
