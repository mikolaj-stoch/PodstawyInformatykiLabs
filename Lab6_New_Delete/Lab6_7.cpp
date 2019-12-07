//============================================================================
// Name        : Lab15.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on addressing 
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int a = 1;
  int b = 3;
  int c = 8;

  int *p = &a;
  cout << *p << endl;
  cout << *(p+1) << endl;
  cout << *(p+2) << endl;
  cout << *(p+3) << endl;

  return 0;
}
