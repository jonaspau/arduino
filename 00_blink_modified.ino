void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); // Turn the voltage of the LED pin on
  delay(250); // Wait for an amount of milliseconds
  digitalWrite(LED_BUILTIN, LOW); // Turn the woltage of the LED pin off
  delay(250);
}
