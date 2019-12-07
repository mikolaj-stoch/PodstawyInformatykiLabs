#include<iostream>
using namespace std;

int clipping (int a)
    {
        if(a < 10)
            return 10;
        if (a < 20)
            return a;
        if (a > 20)
            return 20;
    }
int main ()
{
    int a;

    cout<<"Podaj liczbe: ";
    cin>>a;

    cout<<clipping(a);

    return 0;
}
