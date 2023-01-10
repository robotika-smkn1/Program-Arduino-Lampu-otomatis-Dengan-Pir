//BY PROJECT ARTHA S.A
//SMKN1 KOTA BEKASI
int Bulb = 5;
int PIR = 3;
int val = 0;

void setup()
{
  pinMode(Bulb, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop(){
  val = digitalRead(PIR);

  if (val == HIGH) {
    digitalWrite(Bulb, LOW);

    delay(10);

  }
else
{
  digitalWrite(Bulb, HIGH);
  delay(20);
}
}