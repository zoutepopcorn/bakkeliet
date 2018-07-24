void setup() {
  pinMode(D1, OUTPUT);
  pinMode(D3, OUTPUT);
}

void loop() {
  digitalWrite(D1, HIGH);
  delay(10);
  digitalWrite(D3, LOW);
  delay(1000);
  
  digitalWrite(D1, LOW);
  delay(10);
  digitalWrite(D3, HIGH);
  delay(1000);
}
