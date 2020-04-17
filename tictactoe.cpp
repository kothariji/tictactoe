#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class tictactoe
{
public:
    int c,d,i,j,flag;
    char a,b,X;
    int tic[3][3];
    string e,f;
  void start()
    {
    cout<<"enter the name of 1st player:- ";
    cin>>e;
    cout<<"enter the name of 2nd player:- ";
    cin>>f;
    tic[0][0]=1;
    tic[0][1]=2;
    tic[0][2]=3;
    tic[1][0]=4;
    tic[1][1]=5;
    tic[1][2]=6;
    tic[2][0]=7;
    tic[2][1]=8;
    tic[2][2]=9;
    }
    void fpt()
  {
      cout<<e<<" choose the number of box :- ";
      cin>>c;
      switch (c)
      {
      case 1:   tic[0][0]=88;
                break;
      case 2:   tic[0][1]=88;
                break;
      case 3:   tic[0][2]=88;
                break;
      case 4:   tic[1][0]=88;
                break;
      case 5:   tic[1][1]=88;
                break;
      case 6:   tic[1][2]=88;
                break;
      case 7:   tic[2][0]=88;
                break;
      case 8:   tic[2][1]=88;
                break;
      case 9:   tic[2][2]=88;
      }
  }
    void spt()
  {
      cout<<f<<" choose the number of box :- ";
      cin>>d;
      switch (d)
      {
      case 1:   tic[0][0]=79;
                break;
      case 2:   tic[0][1]=79;
                break;
      case 3:   tic[0][2]=79;
                break;
      case 4:   tic[1][0]=79;
                break;
      case 5:   tic[1][1]=79;
                break;
      case 6:   tic[1][2]=79;
                break;
      case 7:   tic[2][0]=79;
                break;
      case 8:   tic[2][1]=79;
                break;
      case 9:   tic[2][2]=79;
}
  }
  void check1()
  {
      flag=0;
      if(tic[0][0]==88 && tic[0][1]==88 && tic[0][2]==88)
        flag=1;
      else if(tic[1][0]==88 && tic[1][1]==88 && tic[1][2]==88)
        flag=1;
      else if(tic[2][0]==88 && tic[2][1]==88 && tic[2][2]==88)
        flag=1;
      else if(tic[0][0]==88 && tic[1][0]==88 && tic[2][0]==88)
        flag=1;
      else if(tic[0][1]==88 && tic[1][1]==88 && tic[2][1]==88)
        flag=1;
      else if(tic[0][2]==88 && tic[1][2]==88 && tic[2][2]==88)
        flag=1;
      else if(tic[0][0]==88 && tic[1][1]==88 && tic[2][2]==88)
        flag=1;
      else if(tic[0][2]==88 && tic[1][1]==88 && tic[2][0]==88)
        flag=1;
    if(flag==1)
    {
        cout<<"Congratulations!!!  "<<e<<" you are the winner ";
      exit(0);
    }
}
  void check2()
  {
    flag=0;
      if(tic[0][0]==79 && tic[0][1]==79 && tic[0][2]==79)
        flag=1;
      else if(tic[1][0]==79 && tic[1][1]==79 && tic[1][2]==79)
        flag=1;
      else if(tic[2][0]==79 && tic[2][1]==79 && tic[2][2]==79)
        flag=1;
      else if(tic[0][0]==79 && tic[1][0]==79 && tic[2][0]==79)
        flag=1;
      else if(tic[0][1]==79 && tic[1][1]==79 && tic[2][1]==79)
        flag=1;
      else if(tic[0][2]==79 && tic[1][2]==79 && tic[2][2]==79)
        flag=1;
      else if(tic[0][0]==79 && tic[1][1]==79 && tic[2][2]==79)
        flag=1;
      else if(tic[0][2]==79 && tic[1][1]==79 && tic[2][0]==79)
        flag=1;
     if(flag==1)
    {
        cout<<"Congratulations!!!  "<<f<<" you are the winner ";
        exit(0);
    }
  }
  void display()
  {     system("cls");
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(tic[i][j]==88)
            cout<<(char)tic[i][j]<<"\t";
            else if(tic[i][j]==79)
            cout<<(char)tic[i][j]<<"\t";
            else
            cout<<tic[i][j]<<"\t";
        }
        cout<<"\n";
  } }
};
int main()
{
tictactoe p1;
p1.start();
p1.display();
p1.fpt();
p1.display();
p1.spt();
p1.display();
p1.fpt();
p1.display();
p1.spt();
p1.display();
p1.fpt();
p1.display();
p1.check1();
p1.spt();
p1.display();
p1.check2();
p1.fpt();
p1.display();
p1.check1();
p1.spt();
p1.display();
p1.check2();
p1.fpt();
p1.display();
p1.check1();
cout<<"\noops the game is tied";
return 0;
}
