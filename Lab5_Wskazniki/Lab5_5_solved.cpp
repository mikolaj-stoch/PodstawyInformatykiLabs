#include <iostream>
using namespace std;

struct car{
  int sits;
  float range;
};

int main() {

  car tab[10];
  tab[0].sits = 5;
  tab[0].range = 500;
  car au = {30, 1500};
  tab[1]=au;
  cout<<tab[1].sits<<" "<<tab[1].range<<endl;
  cout<<sizeof(tab);
  return 0;
}
