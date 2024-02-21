// Written by A kayela, this sample code will blink the builtin led

// pin 13 is the one connected to the built_in led
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // set pin 13 as an outputpin 
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  for ( int i=0; i<=20; i++) {
    if (i % 2 == 0 && i < 20 ) {
  digitalWrite(ledPin, HIGH); // pull the pin voltage high
  Serial.print("Pin: ");
  Serial.print(ledPin);
  Serial.print(" is On for the ");
  Serial.print(i);
  Serial.println("th time");
  delay(1000); // wait for 250 ms
  digitalWrite(ledPin, LOW); // pull the pin voltage low
   Serial.print("Pin: ");
  Serial.print(ledPin);
  Serial.println(" is Off");
  delay(1000); // wait for 300 ms
    } else if(1 % 2 != 0 && i < 20) {
        digitalWrite(ledPin, HIGH); // pull the pin voltage high
  Serial.println("i is odd right now.");
        delay(300); // wait for 250 ms
        digitalWrite(ledPin, LOW); // pull the pin voltage low
        delay(300); // wait for 300 ms
    } else {
      digitalWrite(ledPin, HIGH);
      Serial.println("i is now 20");
      delay(5000);
      digitalWrite(ledPin, LOW);
      delay(5000);
    }
 
  };
}
