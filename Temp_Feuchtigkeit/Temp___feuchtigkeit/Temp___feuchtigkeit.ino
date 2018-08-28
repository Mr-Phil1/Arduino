#include <SimpleDHT.h>

SimpleDHT SimpleDHT;

#define SimpleDHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = SimpleDHT.read11(SimpleDHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(SimpleDHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(SimpleDHT.humidity);
  delay(1000);
}

