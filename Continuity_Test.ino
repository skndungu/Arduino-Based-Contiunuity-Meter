const int continousPin = 2; // pin goes to your TP(Test Point)
const int buzzerPin = 3;  // connects to your buzzer

const int trigPin = 4;
 int value = 0; // connects to your Common pin on the meter

 
void setup() {
  Serial.begin(9600);
  pinMode(continousPin, INPUT);  // initialize pin as an input
  pinMode(buzzerPin, OUTPUT);   // initialize the buzzer as an output
  pinMode(trigPin, OUTPUT);   // initialize the buzzer as an output
  digitalWrite(trigPin,HIGH);
}

void loop() {

value = digitalRead(continousPin); // check the pin status 
Serial.println(value);   

if(value == 1){                   // if continous then beep the buzzer 
  digitalWrite(buzzerPin,HIGH);
}
else{
  digitalWrite(buzzerPin,LOW);
}


}
