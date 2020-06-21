#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long int num=0,a=1,b=2;
    while(b<=4000000)
    {

        if(b%2==0)
        {
            num+=b ;
        }
        b=a+b;
        a=b-a;



    }
    cout<<num;
    getch();
    return 0;

}
