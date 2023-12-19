// This is a tutorial script where we read the value 
// of a push button and prints it.
// https://docs.arduino.cc/tutorials/uno-rev3/DigitalReadSerial


// set a variable for the digital pin
int btn = 2;

void setup() {
  // Start the serial monitor to see the output
  Serial.begin(9600);
  // set the button to input
  pinMode(btn, INPUT);
}

void loop() {
  // set a variable to store the button state
  int btnState = digitalRead(2);
  // print the button state to the serial monitor
  Serial.println(btnState);
  // wait (in ms)
  delay(250);
}
