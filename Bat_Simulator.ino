/*
* Bat-Simulator
*
* Created by Richard Beattie
*
*/

// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;

// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
randomSeed(4444);
}

void loop() {
  
   int times = random(300,1200);
   Serial.println("Times: ");
   Serial.println(times);
   for(int i = 0; i < times; i++){
     digitalWrite(trigPin, HIGH);
     delayMicroseconds(random(7000, 40000));
     digitalWrite(trigPin, LOW);
     Serial.println(i);
   }
   delay(random(6000, 8000));
}
