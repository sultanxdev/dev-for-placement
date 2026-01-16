#include<iostream>
using namespace std;

int main()
{
  int row,col;
  /*

  Pattern 01
  # # # # #
  # # # # #
  # # # # #
  # # # # #
  # # # # #
   
   for(row=1;row<=4;row++)
   {
    for(col=1;col<=6;col++)
   {
    cout<<"* ";

   }
   cout<<endl;
   }
Pattern 02
  1111
  2222 
  3333
  4444
  for(row=1;row<=4;row++)
  {
    for(col=1;col<13;col++)
    {
      cout<<row,"";
    }
    cout<<endl;
  } 
    
    Pattern 03
    1234
    1234
    1234
for(row=1;row<=4;row++)
  {
    for(col=1;col<13;col++)
    {
      cout<<col,"";
    }
    cout<<endl;
  } 
*/


for(row=5;row>=1;row--)
  {
    for(col=5;col>=1;col--)
    {
      cout<<col,"";
    }
    cout<<endl;


}
}