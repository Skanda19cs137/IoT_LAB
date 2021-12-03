int calibrationTime = 30;
long unsigned int lowIn;
long unsigned int pause = 5000;
boolean lockLow  = true;
boolean takeLowTime;
int pirPin = 3;
int ledPin = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(pirPin, LOW);

  Serial.print("Calibrating Sensor");
  for (int i = 0; i < calibrationTime; i++) {
    Serial.print(".");
    delay(1000);
  }
  Serial.print("done");
  Serial.print("Sensor active");
  delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(pirPin));
  if (digitalRead(pirPin) == HIGH) {

    digitalWrite(ledPin, HIGH);

    if (lockLow) {
      lockLow = false;
      Serial.println("___");
      Serial.println("motion detected at ");
      Serial.println(millis() / 1000);
      Serial.println("sec");

      delay(50);
    }
    takeLowTime = true;
  }

  if (digitalRead(pirPin) == LOW) {

    digitalWrite(ledPin, LOW);

    if (takeLowTime) {
      lowIn = millis();
      takeLowTime = false;
    }
    if (!lockLow && millis() - lowIn > pause) {
      lockLow = true;
      Serial.print("motion ended at");
      Serial.print((millis() - pause) / 1000);
      Serial.println("sec");
      delay(50);
    }
  }
}
