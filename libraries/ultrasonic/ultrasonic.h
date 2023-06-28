#ifndef ultrasonic_h
#define ultrasonic_h
void setupUltrasonicPins(int trigPin, int echoPin);
int getCm(int trigPin, int echoPin);
float getCmFloat(uint trigPin, uint echoPin);
int getInch(int trigPin, int echoPin);
#endif