#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char lista[10][20];
  char nome[20];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 20; y++) {
      lista[x][y] = ' ';
    }
  }
  for (int s = 0; s < 20; s++) {
    nome[s] = ' ';
  }
  for (int x = 0; x < 10; x++) {
    cin >> lista[x];
  }
  for (int x = 0; x < 10; x++) {
    cout << lista[x] << endl;
  }
  cin >> nome;
  int x = fun(lista, nome);
  if (x < 10) {
    cout << x;
  } else if (x == 10) {
    cout << "non presente";
  }
  return 0;
}
