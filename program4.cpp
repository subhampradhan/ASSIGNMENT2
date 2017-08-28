#include <iostream>
using namespace std;


int main()
{ 
  int x=0, x1=0, y=0, w=0, d=0;
 
  cout<<"Enter the number of days to be converted: ";
  cin>>x;
  x1=x;
  y=x/365;
  x=x-(365*y);
  w=x/7;
  d=x-(w*7);
  cout<<x1<<" days can be written in the form of "<<y<<" year, "<<w<<" weeks and "<<d<<" remaining days";
  return 0;
}
