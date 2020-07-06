#include "LiquidCrystal.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
float input_voltage = 0.0;
int change=0;

void setup()
{  //pinMode(3,INPUT);
   Serial.begin(9600);     
   lcd.begin(16, 2);       
   lcd.print("DIGITAL MULTI");
}
void voltmeter()
{

   
   int analog_value = analogRead(A0);
   input_voltage = (analog_value * 5.0) / 1024.0; 
   input_voltage = input_voltage*10;

   
   if (input_voltage < 0.1) 
   {
     input_voltage=0.0;
   } 
    Serial.print("v= ");
    Serial.println(input_voltage);
    lcd.setCursor(0, 1);
    lcd.print("Voltage= ");
    lcd.print(input_voltage);
}

void ammeter()
{
  int analog_value = analogRead(A0);
  Serial.println(analog_value);
  input_voltage = (analog_value * 5.0) / 1024.0; 
  input_voltage = input_voltage*10;
  Serial.println(input_voltage);
  
  double input_current=input_voltage/10;
  Serial.print("i= ");
  Serial.println(input_current);
  lcd.setCursor(0, 1);
  lcd.print("current= ");
  lcd.print(input_current);
  
}

void ohmmeter()
{
  int analog_value = analogRead(A1);
  input_voltage = (analog_value * 5.0) / 1024.0; 
  Serial.print(analog_value);
  delay(100);
  
  float input_resistance;
  input_resistance=(50/input_voltage)-10;
  Serial.print("R in kohms= ");
  Serial.println(input_resistance);
  lcd.setCursor(0, 1);
  lcd.print("R in kohm = ");
  lcd.print(input_resistance);
  
}

void loop()
{
  if ( digitalRead(3) == HIGH)
    change++;
  
  if(change==4)
    change = 0;
  
  if (change == 0 )
    voltmeter();
  else if (change == 1)
    ammeter();
  else
    ohmmeter();
    
  Serial.println(change);
  delay(500);
}
