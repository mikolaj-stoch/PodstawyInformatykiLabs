#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main ()
{
    const int n=5;
    int tab[n];
    srand(time(NULL));
    int s=0;
    for(int i=0;i<n;i++)
        tab[i]=rand()%51;
    int maks=tab[0];
    int mini=tab[0];
    for(int i=0;i<n;i++)
        {
            cout<<tab[i]<<" ";
            s=s+tab[i];
        }
    cout<<endl;
    for(int i=1;i<n;i++)
        {
            if(tab[i]<mini)
                    mini=tab[i];
            if (tab[i]>maks)
                    maks=tab[i];
        }
    cout<<"Suma: "<<s<<endl<<"Srednia: "<<(float)s/n<<endl<<"Maksymalny element: "<<maks<<endl<<"Minimalny element: "<<mini<<endl;
    return 0;
}
