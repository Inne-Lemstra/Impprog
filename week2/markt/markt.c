#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int sinaasappelPrijs, grapefruitPrijs, meloenPrijs;
  
  /* Variabelen worden gebruikt om het maximaal aantal vruchten dat van dat soort op dat moment kunnen worden gekocht. */
  int maxSinaas, maxGrape, maxMel;
  
  /* Worden gebruikt om het aantal sinaasappels en grapefruits om dat moment aan te geven. */
  int sinaasIndex, grapeIndex;
  
  /* Worden gebruikt voor het totale bedrag dat besteed wordt aan de bijbehorende vrucht. */
  int geldSinaas, geldGrape, geldMel;
  
  /* Invoer van variabelen en opmaak van een deel van de tabel. */
  printf("Van alle markten thuis\n");
  printf("De prijs van een sinaasappel: ");
  scanf("%d", &sinaasappelPrijs);
  printf("De prijs van een grapefruit : ");
  scanf("%d", &grapefruitPrijs);
  printf("De prijs van een meloen     : ");
  scanf("%d", &meloenPrijs);
  printf("\nSinaasappel\tGrapefruit\tMeloen\n");
  
  /* Berekent het maximaal aantal sinaasappels dat eventueel in een combinatie kan voorkomen. */
  if(sinaasappelPrijs==0){
    maxSinaas= 99; /* 99, want er moet minimaal 1 andere vrucht bij. Anders kom je niet aan 100 euro. */
  } else {
    maxSinaas = 10000 / sinaasappelPrijs; /* Zoveel sinaasappels kan je kopen voor 100 euro. */
  }
  
  for(sinaasIndex=0; sinaasIndex<=maxSinaas; sinaasIndex++){
    geldSinaas = sinaasIndex * sinaasappelPrijs;
    
    /* Berekent het maximaal aantal grapefruits dat eventueel in een combinatie kan voorkomen. */
    if(grapefruitPrijs==0){
      maxGrape = 100 - sinaasIndex; /* Als grapefruits gratis zijn is het maximaal aantal grapefruits 100 min het aantal sinaasappels dat je al hebt.  */
    } else {
      maxGrape = (10000 - geldSinaas)/grapefruitPrijs; /* Als grapefruitPrijs niet nul is, is het maximaal aantal grapefruits afhankelijk van het geld dat je nog over hebt. */
    }
    
    for(grapeIndex = 0; grapeIndex <= maxGrape; grapeIndex++){
      maxMel = 100 - sinaasIndex - grapeIndex; /* Bepaalt het resterende aantal meloenen om 100 vruchten te krijgen. */
      
      /* Het is mogelijk dat maxMel negatief wordt. Als dit gebeurt, ga uit de nested for-loop, want grapeIndex is toch al te hoog, en wordt anders alleen maar hoger. */
      if (maxMel < 0) {
	break;
      }
      
      geldGrape = grapeIndex * grapefruitPrijs;
      geldMel = maxMel * meloenPrijs;
      
      /* Check uiteindelijk of het totale bedrag 100 euro is. Als dit zo is: Print combinatie. */
      if(10000 - (geldSinaas + geldGrape + geldMel) == 0){
	printf("%d\t\t%d\t\t%d \n", sinaasIndex, grapeIndex, maxMel);
      }
    }
  }
  return 0;
}

