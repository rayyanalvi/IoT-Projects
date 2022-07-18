static float in;                        // taking input from user
String number;                   // converting input float into string
char empty[10] = {0};            // converting converted string into characeter array
int dummy = 0;                   // index for storing character by character in empty
int integer, decimal;            // storing integer and decimal part of input
char dot;                        // storing dot
static int i;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(" Enter a float number: ");
  
  if (Serial.available() > 0)
  {
    i = Serial.parseInt();
    Serial.println(i);
    i=in;
  in=in-i;
  in=in*1000;
  }
  
  

  // checking out just integer part for now
//  Serial.print(" Integer part is ");
//  Serial.println(i);
//  Serial.print(" milli-seconds.");
//  Serial.println(in);
//  
//  digitalWrite(13, HIGH);
//  delay(i);
//  digitalWrite(13, LOW);
//  delay(in);

}
