#include<iostream>
using namespace std;

int main ()
{
    int a = 5;
    int *b = &a;
    cout<<*b<<endl;
    int c = 6;
    int *d = &c;
    *b = *d;
    cout<<*b<<endl;
    return 0;
}