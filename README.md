# traffic-light
Simple Arduino traffic light sequence for model railroad.  Just to publish something on github

## Basic Arduino sketch flow
* Define symbols
```C
// This is where each of the 3 LEDs are connected:
#define REDLED 12
#define YELLOWLED 8
#define GREENLED 7
```
* Initialize the program
```C
void setup() 
{
  // This is setup code that is run only once at startup initialization.
  // All 3 digital pins used are outputs to drive the LEDs:
  
  pinMode(REDLED, OUTPUT);
  pinMode(YELLOWLED, OUTPUT);
  pinMode(GREENLED, OUTPUT);
}
```
* Run the loop continuously
```C
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
```

And of course, just documenting it I already see things I would change.  But I must break from lunch to get back to my real work.
**_What would you do to make this better??_**
