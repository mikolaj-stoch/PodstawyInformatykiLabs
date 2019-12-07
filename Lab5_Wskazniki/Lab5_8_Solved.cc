#include <iostream>
using namespace std;

int main() {
  int *x;
  int y = 2;

  x = &y; //pobranie adresu zmiennej y - poprawne
//  x = y; //przypisanie wartosci wskaznika do int bledne
  *x = y; //przypisanie wartosci do adresu wskaznika y (w tym przypadku wartosc z y)
//  *x = &y //przypisanie wartosci wskaznika do adresu zmiennej y
cout<<"Wartosc: "<<y<<" Adres zmiennej: "<<&y<<" Adres wskazywany przez wskaznik: "<<x<<" Wartosc wskaznika:"<<*x<<endl;
  return 0;
}

