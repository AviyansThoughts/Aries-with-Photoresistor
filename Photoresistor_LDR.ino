// Welcome to Aviyan's Thoughts

int sensorPin = A2; //define analog pin 2
int value = 0;
//int LED = 23; 

void setup() {
	Serial.begin(9600); 
} 

void loop() {
	value = analogRead(sensorPin); 
	Serial.println(value, DEC); // light intensity							
	delay(1000); 
}