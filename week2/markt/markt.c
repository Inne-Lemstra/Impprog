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
  
  int maxsinaas, maxgrape ,maxmel
  
  maxsinaas = 10000 / sinaasappelPrijs;
  maxgrape = 10000 / grapefruitPrijs;
  maxmel = 10000 / meloenPrijs;
  
  printf("Sinaasappel\tGrapefruit\tMeloen\n");
  
  int sinaasindex;
  int grapeindex;
  int melindex;
  
  int geldsinaas;
  int geldgrape;
  int geldmel;
  
  for(sinaasindex=0; sinaasindex<=maxsinaas; sinaasindex++){
	maxgrape = (10000 - sinaasindex * sinaasappelPrijs)/grapefruitPrijs;
		
		geldsinaas= sinaasindex * sinaasappelPrijs;
		
		for(grapeindex = 0; grapeindex <= maxgrape; grapeindex++){
			
			maxmel= (10000 - sinaasindex * sinaasPrijs - grapeindex * grapefruitPrijs)/meloenPrijs;
			
			geldgrape = grapeindex * grapefruitPrijs;
			geldmel = melindex * melPrijs;
			
			if(10000%(geldsinaas + gelgrape + geldmel) && sinaasindex + grapeindex + meloenindex == 100){
				printf("%d\t%d\t%d\t\n" sinaasindex, grapeindex, melindex);
			}
		}
	}
	return 0;
}	