// String methods examples output to serial monitor.
// Written by A kayela

String myString1 = "This is the gospel";
String myChaAt2 = myString1.charAt(2);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i>6; i++) {
 Serial.println( myString1.charAt(2));
  }
 

}
