// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int dist_A = 0;

int dist_B = 0;

int dist_C = 0;

float varA;
float varB;
float varC;

float testA = true, testB = true, testC = true,
testD = true,testE = true,testF = true,testG = true,testH = true;

Adafruit_LiquidCrystal lcd_1(0);

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  lcd_1.begin(16, 2);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  

  
}



void loop()
  
  
  {
  
 
  dist_A = 0.01723 * readUltrasonicDistance(13, 12);
  if (dist_A <= 50) {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    varA = false;
  } else {
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    varA = true;
  }

  dist_B = 0.01723 * readUltrasonicDistance(9, 8);
  if (dist_B <= 50) {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    varB = false;
  } else {
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    varB = true;
  }

  dist_C = 0.01723 * readUltrasonicDistance(3, 2);
  if (dist_C <= 50) {
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    varC = false;
  } else {
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    varC = true;
  }
  delay(10);
  teste ();

  }

void teste (){
  
  if (varA == true && varB == true && varC == true && testA == true) {
    testA = false;
    testB = true;
    testC = true;
    testD = true;
    testE = true;
    testF = true;
    testG = true;
    testH = true;
    lcd_1.clear();
    lcd_1.print("Vagas dis.: 3 "); } 
  
  if (varA == false && varB == true && varC == true && testB ==true) {
    testA = true;
    testB = false;
    testC = true;
    testD = true;
    testE = true;
    testF = true;
    testG = true;
    testH = true;    
    lcd_1.clear();
    lcd_1.print("Vagas dis.: 2 "); }
  
    if (varA == true && varB == false && varC == true && testC ==true) {
	testA = true;
    testB = true;
    testC = false;
    testD = true;
    testE = true;
    testF = true;
    testG = true;
    testH = true;      
    lcd_1.clear();
    lcd_1.print("Vagas dis.: 2 "); }
  
    if (varA == true && varB == true && varC == false && testD == true) {
 	testA = true;
    testB = true;
    testC = true;
    testD = false;
    testE = true;
    testF = true;
    testG = true;
    testH = true;      
    lcd_1.clear();
    lcd_1.print("Vagas dis.: 2 "); }
  
    if (varA == false && varB == false && varC == true && testE == true) {
    testA = true;
    testB = true;
    testC = true;
    testD = true;
    testE = false;
    testF = true;
    testG = true;
    testH = true;
    lcd_1.clear();
    lcd_1.print("Vagas dis.: 1 "); }
  
    if (varA == false && varB == true && varC == false && testF == true) {
    testA = true;
    testB = true;
    testC = true;
    testD = true;
    testE = true;
    testF = false;
    testG = true;
    testH = true;     
    lcd_1.clear();
    lcd_1.print("Vagas dis.: 1 "); }
  
    if (varA == true && varB == false && varC == false && testG == true) {
    testA = true;
    testB = true;
    testC = true;
    testD = true;
    testE = true;
    testF = true;
    testG = false;
    testH = true;     
    lcd_1.clear();
    lcd_1.print("Vagas dis.: 1 "); }
  
    if (varA == false && varB == false && varC == false && testH == true) {
    testA = true;
    testB = true;
    testC = true;
    testD = true;
    testE = true;
    testF = true;
    testG = true;
    testH = false;
    lcd_1.clear();
    lcd_1.print("Vagas dis.: 0 "); }
}

  