#include <LiquidCrystal.h>


void setup() {
  // initialise la broche 13 en sortie numérique
  // la broche 13 a une LED déjà connectée sur la plupart des cartes Arduino :
  pinMode(10, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(10, HIGH);
  digitalWrite(4, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  digitalWrite(10, LOW);
  delay(100);
}

