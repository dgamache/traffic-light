// Traffig Light 101 program
// Model RR simulation
// David Gamache

// This is where each of the 3 LEDs are connected:
#define REDLED 12
#define YELLOWLED 8
#define GREENLED 7

void setup() 
{
  // This is setup code that is run only once at startup initialization.
  // All 3 digital pins used are outputs to drive the LEDs:
  
  pinMode(REDLED, OUTPUT);
  pinMode(YELLOWLED, OUTPUT);
  pinMode(GREENLED, OUTPUT);
}

void loop() {
  // This main code runs repeatedly:

  digitalWrite(REDLED, HIGH);
  delay(10000);
  digitalWrite(REDLED, LOW);
  digitalWrite(GREENLED, HIGH);
  delay(12000);
  digitalWrite(GREENLED, LOW);
  digitalWrite(YELLOWLED, HIGH);
  delay(2000);
  digitalWrite(YELLOWLED, LOW);
}
