#include<SoftwareSerial.h>

const int relay1 = 13;//릴레이1채널
const int relay2 = 12;//릴레이4채널
const int relay3 = 11;//릴레이4채널
const int relay4 = 10;//릴레이4채널
const int relay5 = 9;//릴레이4채널
int blueTx=3;//블루투스 입력핀
int blueRx=2;  //블루투스 출력핀
SoftwareSerial mySerial(blueTx, blueRx); 
String myString=""; 
 
void setup(){
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
 mySerial.begin(9600);

}
void loop(){
   while(mySerial.available())
   {
char mychar = (char)mySerial.read();
myString+=mychar;
delay(5);
   }
     if(!myString.equals(""))
   {
    Serial.println("input value"+ myString);
    if(myString == "1")
    {
      digitalWrite(13,HIGH);
    }
    else{
      digitalWrite(13,LOW);
    }
      myString="";}
   
   {    Serial.println("input value"+ myString);
    if(myString == "2")
    {
      digitalWrite(12,LOW);
    }
    else{
      digitalWrite(12,HIGH);
    }
      myString="";
   }
   {    Serial.println("input value"+ myString);
    if(myString == "3")
    {
      digitalWrite(11,LOW);
    }
    else{
      digitalWrite(11,HIGH);
    }
      myString="";}    
    
   {
    Serial.println("input value"+ myString);
    if(myString == "4")
    {
      digitalWrite(10,LOW);
    }
    else{
      digitalWrite(10,HIGH);
    }
      myString="";}
   {
    Serial.println("input value"+ myString);
    if(myString == "5")
    {
      digitalWrite(9,LOW);
    }
    else{
      digitalWrite(9,HIGH);
    }
   
      myString="";} 
 
}
