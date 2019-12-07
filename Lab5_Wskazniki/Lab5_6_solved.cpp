#include <iostream>
using namespace std;

int main()
{
  int tab[] = {2, 4, 5, 3, 2, 5, 6, 3, 5, 7, 9, 2, 1, 2, 3, 4, 5, 6, 4, 3, 2, 6, 3, 4, 4, 1, 3, 7, 9, 5, 9, 2, 3, 1, 2, 3, 4, 5, 6, 2, 1, 2, 3, 4, 5, 3, 2, 7, 7, 7};
  int n=sizeof(tab)/sizeof(*tab);
  int s=0;
  int l;
  for(int i=0;i<n;i++)
    cout<<tab[i]<<" ";
  cout<<endl;
  for(int i=0;i<n;i++)
  {
    if(tab[i]!=0)
    {
    l=tab[i];
    for(int j=0;j<n;j++)
      if(tab[j]==l)
        {
            s++;
            tab[j]=0;
        }
    cout<<l<<" wystepuje "<<s<<" razy"<<endl;
    s=0;
  }
  }
return 0;
}
