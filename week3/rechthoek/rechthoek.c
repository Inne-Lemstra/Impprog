#include <stdio.h>
#include <stdlib.h>

/*
 * De functie tekenLijn print een reeks van de gegeven breedte,
 * bestaande uit het character c.
 */
void tekenLijn(int breedte, char c) {
  
}

/*
 * De functie tekenZijden tekent de linker- en rechterzijde
 * van de rechthoek.
 */
void tekenZijden(int breedte, int hoogte, char c) {
  int i;
  for(i=2;i<hoogte;i++){
    int aantalspaties=breedte-2;
    putchar(c);
    int counter;
    for(counter=1;counter<=aantalspaties; i++){
      putchar(' ');
    }
    putchar(c);
    putchar('\n');
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