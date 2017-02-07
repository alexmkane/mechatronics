// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
// the number of the motor pin
const int motorPin = 13;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the motor pin as an output:
    pinMode(motorPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
 
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn motor on:
    digitalWrite(motorPin, HIGH);
  } else {
    // turn motor off:
    digitalWrite(motorPin, LOW);
  }
  Serial.println(buttonState);
}
