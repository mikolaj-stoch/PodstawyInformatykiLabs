#include <iostream>
using namespace std;

int main() {
  int a = 1;
  int b = 3;
  int c = 8;

  int *p = &a;
  int *o = &b;
  int *i = &c;
  cout << *p << endl;
  cout << *o << endl;
  cout << *i << endl;

  return 0;
}
