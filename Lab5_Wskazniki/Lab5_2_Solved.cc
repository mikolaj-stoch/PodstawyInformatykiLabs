#include<iostream>
using namespace std;
int main ()
{int tab[10];
for(int i=0;i<10;i++)
tab[i]=(i+1)*(i+1);
//for(int i=0;i<10;i++)
//cout<<tab[i]<<" ";
//cout<<endl;
cout<<tab[0]<<" "<<tab[4]<<" "<<tab[2]<<" "<<tab[9];
cout<<endl;
return 0;
}
