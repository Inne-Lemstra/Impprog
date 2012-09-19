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
    /* maxSinaas = 99, want er moet minimaal 1 andere vrucht bij. Anders kom je niet aan 100 euro. */
    maxSinaas= 99;
  } else {
    /* Zoveel sinaasappels kan je kopen voor 100 euro. */
    maxSinaas = 100000/sinaasappelPrijs;
  }
  
  for(sinaasIndex=0; sinaasIndex<=maxSinaas && sinaasIndex <= 100; sinaasIndex++){
    geldSinaas = sinaasIndex * sinaasappelPrijs;
    
    /* Berekent het maximaal aantal grapefruits dat eventueel in een combinatie kan voorkomen. */
    if(grapefruitPrijs==0){
      /* Als grapefruits gratis zijn is het maximaal aantal grapefruits 100 min het aantal sinaasappels dat je al hebt. */
      maxGrape = 100 - sinaasIndex;
    } else {
      /* Als grapefruits niet gratis zijn, is het maximaal aantal grapefruits afhankelijk van het geld dat je nog over hebt. */
      maxGrape = (10000 - geldSinaas)/grapefruitPrijs;
    }
    
    for(grapeIndex = 0; grapeIndex <= maxGrape && grapeIndex <= 100 - sinaasIndex; grapeIndex++){
      geldGrape = grapeIndex * grapefruitPrijs;
      
      /* Bepaalt het resterende aantal meloenen om 100 vruchten te krijgen. */
      maxMel = 100 - sinaasIndex - grapeIndex;
      geldMel = maxMel * meloenPrijs;
      
      /* Controleer uiteindelijk of het totale bedrag 100 euro is. Als dit zo is: Print combinatie. */
      if(geldSinaas + geldGrape + geldMel == 100000){
        printf("%d\t\t%d\t\t%d \n", sinaasIndex, grapeIndex, maxMel);
      }
    }
  }
  return 0;
}