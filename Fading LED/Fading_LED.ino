int outPin = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(outPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<255; i++)
  {
    analogWrite(outPin, i);
    delay(10);
  }
  for(int j=254; j>0; j--)
  {
    analogWrite(outPin, j);
    delay(10);
  }

}
