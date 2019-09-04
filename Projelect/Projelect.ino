// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void printLed(int nmbr) {
  for (int i=1; i <= 6; i++){
      analogWrite(i, 0);
      delay(10);
   } 
   analogWrite(nmbr, 255);
}

void errorLed(int nmbr) {
  for (int i=1; i <= 6; i++){
      analogWrite(i, 255);
      delay(10);
   } 
   analogWrite(nmbr, 0);
}


// the loop function runs over and over again forever
void loop() {
  int captMouv  = analogRead(0);
  Serial.println(captMouv);
  int val = 0;

  if (captMouv < 200) {
    printLed(2);
    }

  if (captMouv > 200 && captMouv < 300) {
    printLed(3);
  }
 
  if (captMouv > 300 && CaptMouv <400) {
    printLed(4);
  }
    
  if (captMouv > 400 && captMouv < 500) {
    printLed(5); 
  }
  if (captMouv > 500 && captMouv < 600){
    printLed(6);
  }
  
    
  //Serial.println(l);
  delay(1000);
}
