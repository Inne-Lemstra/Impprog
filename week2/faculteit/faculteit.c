#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int invoer;
  long resultaat = 1;
  printf("Van welk getal moet de faculteit worden berekend: ");
  scanf("%d", &invoer);
  int k;
  for (k = 1; k <= invoer; k++) {
    resultaat *= k;
  }
  
  printf("De faculteit van %d is %ld\n", invoer, resultaat);
  
  return 0;
}