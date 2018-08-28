#include <dht.h>
#include <DHT.h>

dht DHT;

 
#define DHT11_PIN 2

void setup() {
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("============================");
  Serial.print("Messsung wird durchgeführt");
  Serial.print("Temperatur = ");Serial.print("*C");
  Serial.println(DHT.temperature);
  Serial.print("Luftfeutigkeit = ");Serial.print("%");
  Serial.println(DHT.humidity);
  Serial.print("===============================");
  
  delay(3500);
}
