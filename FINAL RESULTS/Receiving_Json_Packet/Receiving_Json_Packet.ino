#define RXp2 23
#define TXp2 22

void setup() {
  Serial.begin(500000);
  Serial2.begin(250000, SERIAL_8N1, RXp2, TXp2);
}

void loop() {
  Serial.println(Serial2.readString());  // Receive and Print the Json Packet
  Serial.println("Message Received: ");
}
