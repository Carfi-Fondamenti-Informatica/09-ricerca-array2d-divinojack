int fun(char lista[10][20], char nome[20]){
  int i = 0;
  int j = 0;
  while ((j < 19) and (i < 10)) {
    if (lista[i][j] != nome[j]) {
      i++;
      j = 0;
    } else if (lista[i][j] == nome[j]) {
      j++;
    }
  } return i;
}
