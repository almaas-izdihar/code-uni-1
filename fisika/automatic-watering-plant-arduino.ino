int sensorPin = A0; 
int sensorValue;  
// int limitValue = 620; //limit resistansi
int limitValue = 500; //limit resistansi

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin); 
  Serial.println("Analog Value : ");
  Serial.println(sensorValue);
 
  if (sensorValue<limitValue) {
    Serial.println("tanah masih basah");
    digitalWrite(13, LOW); 
  }
  else {
    Serial.println("tanah kering");
    digitalWrite(13, HIGH); 
  }
 
  delay(1000);
}
