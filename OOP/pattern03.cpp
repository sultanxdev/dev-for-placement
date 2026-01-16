#include<iostream>
using namespace std;
int main()
{
  /*
  aaaaaa
  bbbbbb
  cccccc
  */
  int row,col;
  for(row=1;row<=5;row++)

  {
    char name ='a'+row-1;
    for(col=1;col<=5;col++)
    {
      cout<<name,"";
    }
    cout<<endl;
  }
}