int SoundSensor = 2;
int LED = 3;
boolean LEDStatus = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(SoundSensor, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int SensorData = digitalRead(SoundSensor);
  Serial.println(SensorData);
  if (SensorData == 1) {
    if (LEDStatus == false) {
      LEDStatus = true;
      digitalWrite(LED, HIGH);
    }
    else if (LEDStatus == true) {
      LEDStatus = false;
      digitalWrite(LED, LOW);
    }
  }
}
