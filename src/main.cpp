#include <Arduino.h>
//ZONE 1
#define C1P1 1
#define C1P2 2
//ZONE 2
#define C2P1 4
#define C2P2 5
//ZONE 3
#define C3P1 6
#define C3P2 7
//ZONE 4
#define C4P1 15
#define C4P2 16
void P1s()
{
  digitalWrite(C1P1, HIGH);
  digitalWrite(C1P2, LOW);
  digitalWrite(C2P1, HIGH);
  digitalWrite(C2P2, LOW);
  digitalWrite(C3P1, HIGH);
  digitalWrite(C3P2, LOW);
  digitalWrite(C4P1, HIGH);
  digitalWrite(C4P2, LOW);
}

void P2s()
{
  digitalWrite(C1P1, LOW);
  digitalWrite(C1P2, HIGH);
  digitalWrite(C2P1, LOW);
  digitalWrite(C2P2, HIGH);
  digitalWrite(C3P1, LOW);
  digitalWrite(C3P2, HIGH);
  digitalWrite(C4P1, LOW);
  digitalWrite(C4P2, HIGH);
}

void S1s()
{
  digitalWrite(C1P1, LOW);
  digitalWrite(C1P2, HIGH);
  digitalWrite(C2P1, HIGH);
  digitalWrite(C2P2, LOW);
  digitalWrite(C3P1, LOW);
  digitalWrite(C3P2, HIGH);
  digitalWrite(C4P1, HIGH);
  digitalWrite(C4P2, LOW);
}

void S2s()
{
  digitalWrite(C1P1, HIGH);
  digitalWrite(C1P2, LOW);
  digitalWrite(C2P1, LOW);
  digitalWrite(C2P2, HIGH);
  digitalWrite(C3P1, HIGH);
  digitalWrite(C3P2, LOW);
  digitalWrite(C4P1, LOW);
  digitalWrite(C4P2, HIGH);
}

void setup() 
{
  pinMode(C1P1,OUTPUT);
  pinMode(C1P2,OUTPUT);
  pinMode(C2P1,OUTPUT);
  pinMode(C2P2,OUTPUT);
  pinMode(C3P1,OUTPUT);
  pinMode(C3P2,OUTPUT);
  pinMode(C4P1,OUTPUT);
  pinMode(C4P2,OUTPUT);
  digitalWrite(C1P1, LOW);
  digitalWrite(C1P2, LOW);
  digitalWrite(C2P1, LOW);
  digitalWrite(C2P2, LOW);
  digitalWrite(C3P1, LOW);
  digitalWrite(C3P2, LOW);
  digitalWrite(C4P1, LOW);
  digitalWrite(C4P2, LOW);
}

void loop() 
{
  P1s();
  delay(5000);
  P2s();
  delay(5000);
  S1s();
  delay(5000);
  S2s();
  delay(5000);
}
