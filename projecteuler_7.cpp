#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int flag=0,temp=1,num;
    for(int i=2;flag<=10001;i++)
    {

        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                temp=0;
                break;
            }
            else{
                    temp=1;
            }
        }

        if(temp==1)
        {
            flag++;
        }
        if(flag==10001)
        {
            cout<<i;
            break;
        }

    }
    return 0;
}
