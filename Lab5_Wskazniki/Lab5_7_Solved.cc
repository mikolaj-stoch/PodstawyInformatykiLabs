#include <iostream>
using namespace std;
int main() {
  int tab[2] = {3, 7};

  cout << &tab[0] <<" Adres zmiennej tab[0]"<<endl;
  cout << &tab[1] <<" Adres zmiennej tab[1]"<<endl;
  cout<<"Tab: "<<tab[0]<<" "<<tab[1]<<endl;
double  tab2[2] = {3, 7};
  cout << &tab2[0] <<" Adres zmiennej tab[0](Double)"<<endl;
  cout << &tab2[1] <<" Adres zmiennej tab[1](Double)"<<endl;
  cout<<"Tab: "<<tab2[0]<<" "<<tab2[1]<<endl;
char  tab3[2] = {3, 7};
	 cout << &tab3[0] <<" Adres zmiennej tab[0](Char)"<<endl;
	 cout << &tab3[1] <<" Adres zmiennej tab[1](Char)"<<endl;
  cout<<"Tab: "<<tab3[0]<<" "<<tab3[1]<<endl;




  return 0;
}

