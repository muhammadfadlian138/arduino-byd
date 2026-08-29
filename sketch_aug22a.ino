float note(int semitones) {
  return 440.0 * pow(2.0, semitones / 12.0);
}

int nada(int pin, float n, int d){
  tone(pin, note(n));
  delay(d);
}

int diam(int pin, int d){
  noTone(pin);
  delay(d);
}

void setup() {
  Serial.begin(9600);
  
  // maximum : 10000-ish

  //dewa19
  int pin = 9;
  digitalWrite(pin, HIGH);
  digitalWrite(pin, LOW);
  // tone(pin, 1000);
    // nada(pin, 1,  600);
  // nada(pin, 2,  600);
  // nada(pin, 3,  600);
  // nada(pin, 4,  600);
  // nada(pin, 4,  500);
  // nada(pin, 2,  500);
  // nada(pin, 1,  750);
  // diam(pin,     750);
  // nada(pin, -3, 500);
  // nada(pin, -1, 500);
  // diam(pin,     750);
  // nada(pin, 6,  500);
  // nada(pin, 4,  500);
  // diam(pin,     1500);
  // nada(pin, -3, 500);
  // nada(pin, 6,  500);
  // nada(pin, 7,  500);
  // nada(pin, 6,  500);
  // nada(pin, 1,  750);
  // diam(pin,     250);
  // nada(pin, 2,  500);
  // nada(pin, 4,  500);
  // nada(pin, 6,  500);

  // JJK
  // tone(9, note(9));   delay(250);
  // tone(9, note(8));   delay(250);
  // tone(9, note(6));   delay(250);
  // tone(9, note(4));   delay(250);
  // noTone(9);      delay(500);
  // tone(9, note(-3));  delay(200);
  // noTone(9);      delay(50);
  // tone(9, note(-3));  delay(200);
  // noTone(9);      delay(750);
  // tone(9, note(4));   delay(250);
  // noTone(9);      delay(500);
  // tone(9, note(-3));  delay(200);
  // noTone(9);      delay(50);
  // tone(9, note(-3));  delay(200);
  // noTone(9);      delay(750);
  // tone(9, note(4));   delay(250);
  // noTone(9);      delay(750);
  // tone(9, note(2));   delay(500);
  // tone(9, note(1));   delay(500);
  // tone(9, note(-3));  delay(250);
  // noTone(9);      delay(750);
  ////////////////////
  noTone(pin);          delay(750);
}

void loop() {
  // one shot
  // if (Serial.available() > 0){
  //   int frequency = Serial.parseInt();

  //   Serial.print("Received: ");
  //   Serial.println(frequency);
    
  //   if (frequency > 0) {
  //     tone(9, frequency);
  //   } else {
  //     noTone(9);
  //   }
  // }
} 