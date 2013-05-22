// TabloS.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
 
int main() {
  int t[10][5];
 
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 5; j++)
      t[i][j] = i * j;
 
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 5; ++j)
     cout << t[i][j] << " ";
    cout << endl;
  }
 
  return 0;
}
