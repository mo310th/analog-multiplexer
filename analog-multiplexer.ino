
const int SIG= digitalRead  (A0);
const int S0 = digitalRead  (A1);
const int S1 = digitalRead  (A2);
const int S2 = digitalRead  (A3);
const int S3 = digitalRead  (A4);

void setup() {

  pinMode(S3,   INPUT);
  pinMode(S2,   INPUT);
  pinMode(S1,   INPUT);
  pinMode(S0,   INPUT);
  pinMode(SIG, OUTPUT);

  digitalRead(S3);
  digitalRead(S2);
  digitalRead(S1);
  digitalRead(S0);

  Serial.begin(9600); 

}

void loop() {
 
  Serial.print("S0=  ");
  Serial.print(S0);
  Serial.print("  S1=  ");
  Serial.print(S1);
  Serial.print("  S2=  ");
  Serial.print(S2);
  Serial.print("  S3=  ");
  Serial.println(S3);

}

