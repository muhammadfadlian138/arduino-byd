void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(HIGH);
  Serial.println(LOW);
  ////////
 digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(500);
} 