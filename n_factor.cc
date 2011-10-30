#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

int isNFactored(int value, int n)
{
  int result=0,count=0;
  if (value>0)
  {
    for (int i=2;i<value;i++)
    {
      if(0==value%i)
        count++;
    }
    if (count==n)
      result=1;
  }
  return result;
}

int main() 
{
  cout<<isNFactored(14,2)<<endl;//1,14 has two factors, 2 and 7
  cout<<isNFactored(18,5)<<endl;//0,18 does not have 5 factors, it only has four (2, 3, 6 and 9)
  cout<<isNFactored(25,2)<<endl;//0,25 = 5*5 but we are only interested in distinct factors so the 5 is only counted once.
  cout<<isNFactored(36,7)<<endl;//1,36 has seven factors (2, 3, 4, 6, 9, 12, 18). Note that 6 is counted only once.
  cout<<isNFactored(7,0)<<endl;//1,all prime numbers are 0-factored
  cout<<isNFactored(-5,3)<<endl;//0,the value must be greated than 0
  return 0;
}
