int LDR = A0;
int LED = 13;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
}
void loop() {
  int nilaiLDR = analogRead(LDR);
  if (nilaiLDR < 500) { // Jika ruangan gelap
    digitalWrite(LED, HIGH); // Nyalakan LED
  } else {
    digitalWrite(LED, LOW); // Matikan LED
  }
}
