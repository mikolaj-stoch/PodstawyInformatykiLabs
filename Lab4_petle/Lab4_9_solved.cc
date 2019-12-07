#include<iostream>
using namespace std;
int main ()
{   bool p;
    for (int i=1;i<101;i++)
    {
        p=true;
        if(i%3==0)
            {
            cout<<"Fizz";
            p=false;
            }
        if (i%5==0)
            {
            cout<<"Buzz";
            p=false;
            }
        if (p)
            cout<<i;
        cout<<endl;
    }
    return 0;
    }
