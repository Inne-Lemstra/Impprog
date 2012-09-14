#include <stdio.h>
#include <stdlib.h>

int main() {
  int sinaasappelPrijs, grapefruitPrijs, meloenPrijs;
  printf("Van alle markten thuis\n");
  printf("De prijs van een sinaasappel: ");
  scanf("%d", &sinaasappelPrijs);
  printf("De prijs van een grapefruit : ");
  scanf("%d", &grapefruitPrijs);
  printf("De prijs van een meloen     : ");
  scanf("%d", &meloenPrijs);
  putchar('\n');
  
  int maxSinaas, maxGrape, maxMel;
  if(sinaasappelPrijs==0){
    maxSinaas= 99; /* 99, want er moet minimaal 1 andere vrucht bij. Anders kom je niet aan 100 euro. */
  } else {
    maxSinaas = 10000 / sinaasappelPrijs; /* Hoeveel sinaasappels kan je kopen voor 100 euro? */
  }
  
  printf("Sinaasappel\tGrapefruit\tMeloen\n");
  
  int sinaasIndex;
  int grapeIndex;
  
  /* Wordt gebruikt voor het totale bedrag dat besteed wordt aan de bijbehorende vrucht. */
  int geldSinaas;
  int geldGrape;
  int geldMel;
  
  for(sinaasIndex=0; sinaasIndex<=maxSinaas; sinaasIndex++){

    if(grapefruitPrijs==0){
      maxGrape = 100 - sinaasIndex; /* Als grapefruits gratis zijn is het maximaal aantal grapefruits 100 min het aantal sinaasappels dat je al hebt.  */
    } else {
      maxGrape = (10000 - sinaasIndex * sinaasappelPrijs)/grapefruitPrijs; /* Anders is het maximaal aantal grapefruits afhankelijk van het geld dat je nog nodig hebt. */
    }
    
    geldSinaas= sinaasIndex * sinaasappelPrijs;
    for(grapeIndex = 0; grapeIndex <= maxGrape; grapeIndex++){
      maxMel = 100 - sinaasIndex - grapeIndex; /* Bepaalt het resterende aantal meloenen om 100 vruchten te krijgen. */
      if (maxMel < 0) { /* Het is mogelijk dat maxMel negatief wordt. Als dit gebeurt, ga uit de nested for-loop, want grapeIndex is toch al te hoog, en wordt anders alleen maar hoger. */
	break;
      }
      
      geldGrape = grapeIndex * grapefruitPrijs;
      geldMel = maxMel * meloenPrijs;
      
      if(10000 - (geldSinaas + geldGrape + geldMel) == 0){ /* Check uiteindelijk of het totale bedrag 100 euro is. Als dit zo is: Print combinatie. */
	printf("%d\t\t%d\t\t%d \n", sinaasIndex, grapeIndex, maxMel);
      }
    }
  }
  return 0;
}

