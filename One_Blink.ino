//Bryan Hess

void setup() {
  pinMode(9, INPUT);      // sets the digital pin 9 as input
  pinMode(8, OUTPUT);     // sets the digital pin 8 as output
}

void loop() {
  int val = digitalRead(9);
  if (val = HIGH) {
    digitalWrite(8, HIGH);  // sets the digital pin 8 on
    delay(1000);            // waits for a second
    digitalWrite(8, LOW);   // sets the digital pin 8 off
    delay(1000);            // waits for a second
  }
  else {
    digitalWrite(8, LOW);
    delay(1000);
  }
}
