#include <LiquidCrystal.h>


void setup() {
  // initialise la broche 10 et 4 en sortie numérique
  // 
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

