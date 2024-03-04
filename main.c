#include <stdio.h>

void dizerboatarde(char nome[20]) {
  printf("Boa tarde! %s", nome);
}

int main(void) {
  dizerboatarde("Igor");
  dizerboatarde("Heitor");
  dizerboatarde("Ana");
  return 0;
}