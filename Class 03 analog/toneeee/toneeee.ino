

void setup() {
  Serial.begin(9600);
 // pinMode(speaker, OUTPUT);

}

void loop() {
  int mic = analogRead(A0);

  Serial.println(mic);

}
