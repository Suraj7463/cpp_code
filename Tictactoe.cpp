#include<iostream>
using namespace std;
int main(){
    char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        cout<<board[i][j]<<endl;
    int choice;
cout<<"T i c k C r o s s G a m e"<<endl;
cout<<"\tPlayer1 [x] \n\tPlayer2 [o]\n";

 cout<<"     |        |     \n";
 cout<<" "<<board[0][0]<<"   |    "<<board[0][1]<<"   |  "<<board[0][2]<<"  \n";
 cout<<"_____|________|_____\n";
 cout<<"     |        |     \n";
 cout<<"  "<<board[1][0]<<"  |   "<<board[1][1]<<"    |  "<<board[1][2]<<"  \n";
 cout<<"_____|________|_____\n";
 cout<<"     |        |     \n";
 cout<<"  "<<board[2][0]<<"  |   "<<board[2][1]<<"    |  "<<board[2][2]<<"  \n";
 cout<<"     |        |     \n";

 cout<<"Player1 [x] turn:";
 cin>>choice;
 switch(choice)
 {

     case 1:
     board[0][0]='x';
     break;

     case 2:
     board[0][1]='x';
     break;

     case 3:
     board[0][2]='x';
     break;

     case 4:
     board[1][0]='x';
     break;

     case 5:
     board[1][1]='x';
     break;

     case 6:
     board[1][2]='x';
     break;

     case 7:
     board[2][0]='x';
     break;

     case 8:
     board[2][1]='x';
     break;

     case 9:
     board[2][2]='x';
     break;
 }

 cout<<"T i c k C r o s s G a m e"<<endl;
cout<<"\tPlayer1 [x] \n\tPlayer2 [o]\n";

 cout<<"     |        |     \n";
 cout<<" "<<board[0][0]<<"   |    "<<board[0][1]<<"   |  "<<board[0][2]<<"  \n";
 cout<<"_____|________|_____\n";
 cout<<"     |        |     \n";
 cout<<"  "<<board[1][0]<<"  |   "<<board[1][1]<<"    |  "<<board[1][2]<<"  \n";
 cout<<"_____|________|_____\n";
 cout<<"     |        |     \n";
 cout<<"  "<<board[2][0]<<"  |   "<<board[2][1]<<"    |  "<<board[2][2]<<"  \n";
 cout<<"     |        |     \n";

 cout<<"Player1 [x] turn:";

}

