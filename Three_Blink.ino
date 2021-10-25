#AderotimiAdetunji
void setup() {
  pinMode(9, INPUT);       // sets the digital pin 9 as input
  pinMode(10, OUTPUT);     // sets the digital pin 10 as output
  pinMode(11, OUTPUT);     // sets the digital pin 11 as output
  pinMode(12, OUTPUT);     // sets the digital pin 12 as output
}

void loop() {
  if (digitalRead(9) = HIGH) {
    digitalWrite(10, HIGH);  // sets the digital pin 10 on
    delay(1000);             // waits for a second
    digitalWrite(10, LOW);   // sets the digital pin 10 off
    delay(1000);             // waits for a second
    digitalWrite(11, HIGH);  // sets the digital pin 11 on
    delay(1000);             // waits for a second
    digitalWrite(11, LOW);   // sets the digital pin 11 off
    delay(1000);             // waits for a second
    digitalWrite(12, HIGH);  // sets the digital pin 12 on
    delay(1000);             // waits for a second
    digitalWrite(12, LOW);   // sets the digital pin 12 off
    delay(1000);             // waits for a second
  }
  else {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    delay(1000);
  }
}
