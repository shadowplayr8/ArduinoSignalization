const int obstaclePin = 2;
const int buzzerPin = 3;
const unsigned long beepDuration = 500;
const unsigned long totalBeepTime = 5000;
unsigned long previousMillis = 0;
boolean buzzerState = false;
void setup() {
  pinMode(obstaclePin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}
void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= beepDuration) {
    previousMillis = currentMillis;
    buzzerState = !buzzerState;
    digitalWrite(buzzerPin, buzzerState ? HIGH : LOW);
  }
  if (currentMillis >= totalBeepTime) {
    digitalWrite(buzzerPin, LOW);
    while (true) {
    }
  }
}