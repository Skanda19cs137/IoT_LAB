const int trigPin=2;
const int echoPin=4;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 long duration;
 int inches, cm;
pinMode(trigPin, OUTPUT);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
duration= pulseIn(echoPin, HIGH);
inches= microsecondsToInches(duration);
cm= microsecondsToCentimeters(duration);
Serial.print(inches);
Serial.print("\t");
Serial.print(cm);
Serial.println();
delay(1000);
}
long microsecondsToCentimeters(long microseconds)
{
  return microseconds/29/2;
}
long microsecondsToInches(long microseconds)
{
  return microseconds/74/2;
}
