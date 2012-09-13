#include <stdio.h>
#include <stdlib.h>

/* (c) Inne en Han, 06-09-2012
 * Pythagoras functie
 */

int main (int argc, char *argv[]) {
  int a, b, c; /* De zijden van de driehoek */
  int x; /* Tijdelijke vatriabele voor de rangschikking. */
  printf("Geef lengtes voor de zijden:\n");
  scanf("%d %d %d", &a, &b, &c);
  
  /* Bepalen welke zijde het grootste is, en deze in de variabele c gooien.*/
  if(a >= b && a >= c){ 
    x = a;
    a = c;
    c = x;
  } else if(b >= a && b >= c) {
    x = b;
    b = c;
    c = x;
  } /* Als aan beide voorwaarden NIET wordt voldaan, is c al de grootste. */
  
  /* Controleren wat voor soort driehoek het is. */
  if (a + b <= c) {
    printf("Dit is geen driehoek.\n");
    /* Als (a+b<c) dan kunnen de lijnen a en b elkaar nooit raken, en als (a+b=c) dan liggen ze op een lijn. */
  } else if (a*a + b*b == c*c) {
      printf("Dit is een rechthoekige driehoek.\n");
  } else if (a*a + b*b < c*c) {
      printf("Dit is een stomphoekige driehoek.\n");
  } else {
      printf("Dit is een scherphoekige driehoek.\n");
  }
  
  return 0;
}