#include <stdio.h>
#include <ctype.h>
int main(void) {
  char letra;
  printf("Escribe un carácter:\n");
  scanf("%c", &letra);
  if (isalpha(letra)) {
    printf("Es una letra");
  } else {
    printf("NO es una letra");
  }
  return 0;
}
