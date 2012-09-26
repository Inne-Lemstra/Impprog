#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
  int invoer;
  printf("Van welk getal moet bepaald worden of het priem is: ") ;
  scanf("%d", &invoer);
  int index;					/* Index is voor het afgaan van de loop. */
  
  if (invoer == 2) {
    printf("%d is priem\n", invoer);
    return 0;
  }
  
  if (invoer == 0 || invoer == 1 || invoer % 2 == 0) { /* Checkt of het om een randgeval gaat, of of het een even getal is. */
    printf("%d is geen priem\n", invoer);
    return 0;
  }
  
  for(index = 3; index <= invoer / 3; index += 2){ /* Alle even getallen kun je wel overslaan, want dan zou het ook al deelbaar door 2 zijn geweest. */
    if(invoer % index == 0){
      printf("%d is geen priem\n", invoer);
      return 0;					/* Stap uit het programma als zeker is dat het geen priem is*/
    }
  }
  
  /* Als het programma hier komt zijn alle tests doorstaan, dus is het een priemgetal */
  printf("%d is priem\n", invoer);
  return 0 ;
}
