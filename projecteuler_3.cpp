#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    int num;
    vector<int> vec;
    cout<<("enter your number\n");
    cin>>num;
    int i=3,k=0;
    vec.push_back(2);
    while(i<=num/2)
    {
      if(num%i==0)
      {
          for(int j=2;j<i;i++)
          {
              if(i%j==0)
              vec.push_back(i);
          }
      }
      i++;
    }
    cout<<vec.back();
    return 0;
}
