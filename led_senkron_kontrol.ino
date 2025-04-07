int led1 = 8;   
int led2 = 9; 

void setup() {
  Serial.begin(9600);
  delay(100); // Bazı durumlarda gerekli
  Serial.println("GITHUB TEST");
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(500); // 0.5 saniye açık

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(500); // 0.5 saniye kapalı
}
