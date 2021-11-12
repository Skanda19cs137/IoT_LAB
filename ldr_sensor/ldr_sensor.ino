int light_sensitivity = 2;
void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);

}
void loop()
{
  int ldrValue = analogRead(A0);
  Serial.println(ldrValue);
  delay(50);
  if (ldrValue < light_sensitivity)
    digitalWrite(11, HIGH);
  else digitalWrite(11, LOW);
  delay(1000);
}
