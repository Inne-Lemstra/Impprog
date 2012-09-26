#include <stdio.h>
#include <stdlib.h>

double R0 = 0, R1 = 0, R2 = 0, R3 = 0;
	
void schrijfWaarde(int registerNummer, double waarde) {
  /* vul dit zelf in */
}
	
double leesWaarde(int registerNummer) {
  /* vul dit zelf in */
}
	
void toonRegisters() {
  printf("R0=%lf R1=%lf R2=%lf R3=%lf\n", R0, R1, R2, R3);
}

int invoerRegister(char *invoerTekst) {
  int reg;
  printf("%s", invoerTekst);
  scanf("%d", &reg);
  while ((reg < 0) || (reg > 3)) {
    printf("Fout, probeer opnieuw.\n");
    scanf("%d", &reg);
  }
  return reg;
}

double invoerWaarde(char *invoerTekst) {
  double d;
  printf("%s", invoerTekst);
  scanf("%lf", &d);
  return d;
}
	
void toekenning() {
  printf(" Rx=y: \n");
  int x = invoerRegister(" x=");
  double y = invoerWaarde(" y=");
  schrijfWaarde(x, y);
}

void optellen() {
  int x, y, z;
  printf(" Rx=Ry+Rz: \n");
  x = invoerRegister(" x=");
  y = invoerRegister(" y=");
  z = invoerRegister(" z=");
  /* vul dit zelf aan */
}

void aftrekken() {
  int x, y, z;
  printf(" Rx=Ry-Rz: \n");
  x = invoerRegister(" x=");
  y = invoerRegister(" y=");
  z = invoerRegister(" z=");
  /* vul dit zelf aan */
}

void vermenigvuldigen() {
  int x, y, z;
  printf(" Rx=Ry*Rz: \n");
  x = invoerRegister(" x=");
  y = invoerRegister(" y=");
  z = invoerRegister(" z=");
  /* vul dit zelf aan */
}

void delen() {
  int x, y, z;
  printf(" Rx=Ry/Rz: \n");
  x = invoerRegister(" x=");
  y = invoerRegister(" y=");
  z = invoerRegister(" z=");
  /* vul dit zelf aan */
}

int leesOpdracht() {
  int opdracht;
  printf("opdracht: stop(0) =(1) +(2) -(3) *(4) /(5): ");
  scanf("%d", &opdracht);
  while ((opdracht < 0) || (opdracht > 5)) {
    printf("Fout, probeer opnieuw.\n");
    scanf("%d", &opdracht);
  }
  return opdracht;
}

int main(int argc, char *argv[]) {
  int doorgaan = 1;
  int opdracht;

  while (doorgaan == 1) {
    toonRegisters();
    opdracht = leesOpdracht();
    switch (opdracht) {
    case 0: /* plaats hier je eigen code */
      break;
    case 1: toekenning();
      break;
    /* plaats hier je eigen code */
    }
  }

  return 0;
}
