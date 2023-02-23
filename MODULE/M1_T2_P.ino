int pin = 2;

volatile int state = LOW;

void setup()
{
pinMode(11, OUTPUT);

pinMode(2, INPUT);

Serial.begin(9600);
attachInterrupt(digitalPinToInterrupt(pin), flash, CHANGE);

void loop() {
}
void flash() {
state = !state; 
digitalWrite(11, state); 
Serial.println("motion detected");
}