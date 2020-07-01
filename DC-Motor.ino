void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(8, HIGH);
  delay(100); 
  digitalWrite(9, LOW);
  delay(100); 
}