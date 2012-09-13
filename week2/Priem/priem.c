#include<stdio.h>
#include<stdlib.h>

int main() {
  int invoer;
  printf("Van welk getal moet bepaald worden of het priem is: ") ;
  scanf("%d", &invoer);
  int index;					/*Index is voor het afgaan van de loop.*/
  
  if(invoer==1||invoer==0){
      printf("%d is geen priem \n", invoer);
      return 0;
    }
  
  for(index=2; index<invoer; index++){
    if(invoer%index==0){
      printf("%d is geen priem \n", invoer);
      return 0;					/* stap uit het programma als zeker is dat het geen priem is*/
    }
  }
  printf("%d is priem \n", invoer);
    
  return 0 ;
}