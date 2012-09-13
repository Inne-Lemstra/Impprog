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
  
  maxSinaasappels = 100000 / sinaasappelPrijs;
  maxGrapefruits = 100000 / grapefruitPrijs;
  maxMeloenen = 100000 / meloenPrijs;
  
  printf("Sinaasappel\tGrapefruit\tMeloen");
  
  int sinaasappelIndex;
  int grapefruitIndex;
  int meloenIndex;
  
  for (sinaasappelIndex = 0; sinaasappelIndex <= maxSinaasappels; sinaasappelIndex++) {
    
  }
  
  return 0;
}