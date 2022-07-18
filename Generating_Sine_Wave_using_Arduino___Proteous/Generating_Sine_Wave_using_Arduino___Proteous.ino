int f = 20;   // signal frequency
float fs = 500.0;   // sampling frequency
int sig[500];   // to store signal
float t;



void setup() {
  pinMode(10, OUTPUT);

  // generate sin signal
  for(int i = 0; i < 500; i++)
  {
    t = (float)i/fs;
    sig[i] = (int)(127.0*(sin(2*3.14*f*t)+1.0));
  }

}

void loop() {
  for(int j = 0; j < 500; j++)
  {
    analogWrite(10, sig[j]);
    delay(2);   // sampling interval
  }

}
