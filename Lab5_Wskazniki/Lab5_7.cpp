//============================================================================
// Name        : Lab7.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on addressing
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int tab[2] = {3, 7};

  cout << &tab[0] << endl;
  cout << &tab[1] << endl;

  return 0;
}
