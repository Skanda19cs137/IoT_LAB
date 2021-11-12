int Dpin0 = 5;
int Apin0 = 2;
int ApinVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(Dpin0, INPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("D0 Value: ");
  Serial.println(digitalRead(Dpin0));
  Serial.print("A0 Value: ");
  Serial.println(analogRead(Apin0));
  Serial.println(ApinVal);
  delay(3000);
}
