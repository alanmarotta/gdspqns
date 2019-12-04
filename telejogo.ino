// Programa para o arduino telejogo.ino
// Lógica e programação para grandes e pequenos

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A7);
  int sensorValue2 = analogRead(A6);
  Serial.print(sensorValue);
  Serial.print(" ");
  Serial.println(sensorValue2);
  delay(10);        
}
