#include<iostream>

using namespace std;

#define mmax(a,b) ((a)>(b)?(a):(b))

int main ()
{
    int a;
    int b;
    cin>>a>>b;
    cout<<mmax(a,b);
    return 0;
}