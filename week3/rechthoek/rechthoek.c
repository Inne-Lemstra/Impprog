#include <stdio.h>
#include <stdlib.h>

/*
 * De functie tekenLijn print een reeks van de gegeven breedte,
 * bestaande uit het character c.
 */
void tekenLijn(int breedte, char c) {
  int index;
  for (index = 0; index < breedte; index++) {
    printf("%c", c);
  }
  printf("\n");
}

/*
 * De functie tekenZijden tekent de linker- en rechterzijde
 * van de rechthoek.
 */
void tekenZijden(int breedte, int hoogte, char c) {
  int index1;
  for (index1 = 2; index1 < hoogte; index1++){
    int aantalspaties = breedte - 2;
    printf("%c", c);
    int index2;
    for (index2 = 1; index2 <= aantalspaties; index2++){
      printf(" ");
    }
    printf("%c", c);
    printf("\n");
  }
}

/*
 * De functie tekenRechthoek tekent een rechthoek met de
 * gegeven breedte en hoogte waarbij het character c gebruikt
 * wordt voor de rand.
 */
void tekenRechthoek(int breedte, int hoogte, char c) {
  tekenLijn(breedte, c);
  tekenZijden(breedte, hoogte, c);
  tekenLijn(breedte,c);
}

int main(int argc, char*argv[]) {
  int breedte, hoogte;
  printf("Geef de breedte van de rechthoek op: ");
  scanf("%d", &breedte);
  printf("Geef de hoogte van de rechthoek op : ");
  scanf("%d", &hoogte);
  if (hoogte < 2 || breedte < 2) {
    printf("Hoogte en breedte moeten minstens 2 zijn.");
  } else {
    tekenRechthoek(breedte, hoogte, '*');
  }
  return 0;
}