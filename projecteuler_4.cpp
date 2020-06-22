#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i=999,j=999;
    while(i>=900 && j>=900)
    {
        int clone, product;
        product=i*j;
        clone=product;
          int rev=0,r;
        while(clone!=0)
        {

            r=clone%10;
            rev=(rev*10)+r;
            clone=clone/10;
        }
        if(product==rev)
        {

            cout<<i<<j<<endl<<product;
            break;
        }
        else{

            j--;
        }
        if(j==900)
        {
             i=i-1;
             j=999;
        }
    }
    return 0;

}
