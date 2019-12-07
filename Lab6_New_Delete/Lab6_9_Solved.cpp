#include<iostream>
using namespace std;
int main ()
{
    char a[25]="Dzis jest piekna pogoda";
    char *b=a;
    for(int i=0;i<25;i++)
    {   cout<<*b;
        (b++);
    }
    cout<<endl;

    int x = 0;
    char *c=a;
    cout<<*c<<" ";
    c++;
    int i=1;
    while(i<25)
    {
        cout<<*c<<" ";
        i=i+i;
        c=c+i;
    }
    return 0;

}
