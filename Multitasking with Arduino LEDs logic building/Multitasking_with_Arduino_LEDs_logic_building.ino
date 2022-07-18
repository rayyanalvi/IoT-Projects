unsigned long prevTime1 = millis();
unsigned long prevTime2 = millis();

int ledPin1 = 2;
int ledPin2 = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentTime1 = millis();
  unsigned long currentTime2 = millis();

  if ((currentTime1 - prevTime1) >= 1000)
  {
    digitalWrite(ledPin1, HIGH);
    delay(500);
    prevTime1 = currentTime1;
    Serial.print(" ledPin 1 Time ");
    Serial.println(prevTime1);
  }
  else if ((currentTime2 - prevTime2) >= 2000)
  {
    digitalWrite(ledPin2, HIGH);
    delay(500);
    prevTime2 = currentTime2;
    Serial.print(" ledPin 2 Time ");
    Serial.println(prevTime2);
  }

  else
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);

  }
}
