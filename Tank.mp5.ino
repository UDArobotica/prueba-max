#include<SoftwareSerial.h>
SoftwareSerial bluetooth(1,0);
char dato;

void setup() {
 pinMode(2,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 bluetooth.begin(9600);
 Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
dato=bluetooth.read();
delay(100);
Serial.print(dato);
if(dato==1){
forward();

}

}
void forward(){// put your main code here, to run repeatedly:
digitalWrite(2,LOW);
analogWrite(4,255);
digitalWrite(5,HIGH);
analogWrite(6,255);
}
