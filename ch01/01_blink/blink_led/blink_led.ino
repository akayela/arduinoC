// Written by A kayela, this sample code will blink the builtin led

// pin 13 is the one connected to the built_in led
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // set pin 13 as an outputpin

}

void loop() {
  // put your main code here, to run repeatedly:
  for ( int i=0; i<=20; i++) {
    if (i % 2 == 0 && i < 20 ) {
  digitalWrite(ledPin, HIGH); // pull the pin voltage high
  delay(1000); // wait for 250 ms
  digitalWrite(ledPin, LOW); // pull the pin voltage low
  delay(1000); // wait for 300 ms
    } else if(1 % 2 != 0 && i < 20) {
        digitalWrite(ledPin, HIGH); // pull the pin voltage high
        delay(300); // wait for 250 ms
        digitalWrite(ledPin, LOW); // pull the pin voltage low
        delay(300); // wait for 300 ms
    } else {
      digitalWrite(ledPin, HIGH);
      delay(5000);
      digitalWrite(ledPin, LOW);
      delay(5000);
    }
 
  };
}
