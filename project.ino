int ledPin = 7;
int buzz = 8;
int motorPin = 13;
void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzz, OUTPUT);
}
void loop() {
  //Serial.print("Moisture Sensor Value:");
  int r = analogRead(A0);
  Serial.println(r);
  delay(10000);
  if (r > 200)
  {
    digitalWrite(ledPin, HIGH); // turn the LED on (HIGH is the voltage level)
    tone(buzz, 1000);
    analogWrite(motorPin, 255);
    delay(5000); // wait for a second
    digitalWrite(ledPin, LOW); // turn the LED off by making the voltage LOW
    noTone(buzz);
    analogWrite(motorPin, LOW);
    delay(1000); // wait for a second
    //analogWrite(motorPin,HIGH);
    delay(10000);
    //analogWrite(motorPin,LOW);
  }
}
