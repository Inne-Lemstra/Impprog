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
  int maxsinaas, maxgrape, maxmel;
  if(sinaasappelPrijs==0){
    maxsinaas= 99;
  } else {
    maxsinaas = 10000 / sinaasappelPrijs;
  }

  
  printf("Sinaasappel\tGrapefruit\tMeloen\n");
  
  int sinaasindex;
  int grapeindex;
    
  int geldsinaas;
  int geldgrape;
  int geldmel;
  
  for(sinaasindex=0; sinaasindex<=maxsinaas; sinaasindex++){
    if(grapefruitPrijs==0){
      maxgrape = 100 - sinaasindex;
    } else {
      maxgrape = (10000 - sinaasindex * sinaasappelPrijs)/grapefruitPrijs;
    }
    
    geldsinaas= sinaasindex * sinaasappelPrijs;
    for(grapeindex = 0; grapeindex <= maxgrape; grapeindex++){
      maxmel = 100 - sinaasindex - grapeindex;
      
      geldgrape = grapeindex * grapefruitPrijs;
      geldmel = maxmel * meloenPrijs;
      
      if(10000 - (geldsinaas + geldgrape + geldmel) == 0 && (sinaasindex + grapeindex + maxmel == 100)){
	printf("%d\t\t%d\t\t%d \n", sinaasindex, grapeindex, maxmel);
      }
    }
  }
  return 0;
}