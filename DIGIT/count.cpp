#include<iostream>
using namespace std;

int main ()
{
  int num,count=0;
  cout<<"enter the number";
  cin>>num;
  while(num!=0)
  {
    num=num/10;
    count++;
  }
  cout<<count;
  cout<<endl;
  return 0;
}
