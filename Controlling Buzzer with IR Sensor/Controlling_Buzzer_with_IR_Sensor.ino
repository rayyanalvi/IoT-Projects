void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(12,OUTPUT);//LED
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(4)==LOW){
  tone(12, 2000);
}
else{
  noTone(12);
}
}
