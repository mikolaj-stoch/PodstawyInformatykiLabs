#include<iostream>
using namespace std;
int main ()
{
    char a[20] = "Krzysztof Walaszek";
    cout<<a<<endl;
    char *b=a;
    cout<<*b<<endl;
    bool c=false;
    for(int i=0;i<19;i++)
    {
        (*b++);
        if(c==true)
            cout<<*b;
        if(*b==' ')
            c=true;

    }
    return 0;
}
