int sensorValue = 0;
int outputValue = 0;
const int analogInPin = A0 ;
const int analogOutPin = 9;
void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(analogOutPin, outputValue);
  Serial.println(sensorValue);
  Serial.println(outputValue);
  delay(500);
}
