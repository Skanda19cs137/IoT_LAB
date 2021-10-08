int r=13;
int y=12;
int g=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
  digitalWrite(r, HIGH); 
  digitalWrite(y, LOW); 
  digitalWrite(g, LOW); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(r, HIGH);
  delay(3000);
  digitalWrite(r, LOW); 
  digitalWrite(y, HIGH);   
  delay(1000);
  digitalWrite(y, LOW); 
  digitalWrite(g, HIGH);   
  delay(5000);
  digitalWrite(g, LOW);  
}
