#include "TinyGPS++.h"

TinyGPSPlus gps;
int flag=-1;

void setup() 
{
  pinMode(10, INPUT);
  pinMode(11, INPUT);  
  Serial.begin(9600);
  Serial1.begin(9600);
  while(!Serial);
  while(!Serial1);
  Serial.println("Heart Rate Monitoring System");
}

void loop() 
{
  while(Serial1.available())
  {
    gps.encode(Serial1.read());
  }
  if(gps.location.isUpdated()) // && (!(digitalRead(10)) && (!(digitalRead(11))))
  {
    Serial.println("Satellite Count:");
    Serial.println(gps.satellites.value());
    Serial.println("Latitude:");
    Serial.println(gps.location.lat(), 6);
    Serial1.print(gps.location.lat(), 6);
    Serial1.print(",");
    Serial.println("Longitude:");
    Serial.println(gps.location.lng(), 6);
    Serial1.print(gps.location.lng(), 6);
    Serial1.print(",");
    Serial.println("Heart rate:");
    if((digitalRead(10) == 1)||(digitalRead(11) == 1))
    {
      Serial.println("N/A");
      Serial1.print(flag);
    }
    else
    {
      Serial.println(analogRead(A0));
      Serial1.print(analogRead(A0));
    }
    Serial1.println();
    Serial.println();
    delay(2000);
  }
}
