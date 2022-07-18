#include <IRremote.h>

int recPin = 11;

IRrecv irrecv(recPin);

decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();

}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);
    irrecv.resume();
  }

  delay(100);

}
