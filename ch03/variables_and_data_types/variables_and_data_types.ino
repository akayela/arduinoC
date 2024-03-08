// Variables data types and methods printed out to serial monitor.
// Written by A kayela
/* Data Types
void    : Used to declare functions with no return value and define pointers with unknown types
bolean  : Stores true or false
char    : Stores single quoted character such as 'a'
byte    : Stores numbers as 8-bit unsigned data that means from 0-255
int     : Stores numbers as 2-bytes signed data
word    : Stores numbers as 2-bytes unsigned data
long    : Stores numbers as 4-bytes signed data
float   : Stores numbers with a decimal point as 4-bytes signed data
double  : Stores float values with precision 2 times greater than float
Array   : Stores an ordered collection of elements of the same type accessible via their index
string  : Stores an array of (char) where the last element is null
String  : Is a instance of the String class that provides a nice way to work with text
        : with methods to concat, split and more.
**IF you go beyond the bounds of a type the variable rolls over to the other side of the boundary
int myInt = 32767; // the maximum int value
myInt = myInt + 1; // myInt is now -32678
*/

bool myBool = true;

char myChar = 'U';

byte myByte = B10111;

int myInt = 5;

word myWord = 12345;

long myLong = -123;

float myFloat = -123456.1;

double myDouble = 1.234567;
 
int myArray[5] = {1, 2, 3, 4, 5};
char myArray1[5] = {'H', 'e', 'l', 'l', 'o'};

char myString[4] = "byte";

String myString3 = "this is the gospel, this is the good news"; // Variable initialization

// charAt function returns a character at a particular position
char myCharAt2 = myString3.charAt(2);

// indexOf return the index at the first occurance of a character
int myIndexOfT = myString3.indexOf('t');

// supplying a start index to indexOf()
int myIndexOfT2 = myString3.indexOf('t', 5);

// lastIndexOf returns the last occurence of a value
int myIndexOfT3 = myString3.lastIndexOf('t');



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

int printWait() {
  // put your main code here, to run repeatedly:
  Serial.println(myBool);
  Serial.println(myChar);
  Serial.println(myByte);
  Serial.println(myInt);
  Serial.println(myWord);
  Serial.println(myLong);
  Serial.println(myFloat);
  Serial.println(myDouble);
  Serial.println(myArray1);
  Serial.println(myString);
  Serial.println( myCharAt2);
  Serial.println("Printing the index without giving a start index");
  Serial.println(myIndexOfT);
  Serial.println("Printing the index having supplied a start index");
  Serial.println(myIndexOfT2);
  Serial.println("Printing the lastIndexOf t");
  Serial.println(myIndexOfT3);
  delay(60000);
  return 0;
}

void loop() {
printWait();
delay(60000);
}
