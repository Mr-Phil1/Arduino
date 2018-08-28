#include <dht.h> // DHT 11 Temp Lib

int pause = 1000;
#define DHT11_PIN 2
#define green 3 // define LED PINs
#define red 4
#define blue 5
dht DHT;

void setup() {
  int pause = 1000; // 1 sec break define
  Serial.begin(9600);
  digitalWrite(red, OUTPUT);
  digitalWrite(green, OUTPUT);
  digitalWrite(blue, OUTPUT);
  digitalWrite(red, HIGH);
  delay(pause / 2);
  digitalWrite(green, HIGH);
  delay(pause / 2);
  digitalWrite(blue, HIGH);
  delay(pause / 2);
  digitalWrite(red, LOW);
  delay(pause / 2);
  digitalWrite(green, LOW);
  delay(pause / 2);
  digitalWrite(blue, LOW);
  delay(pause / 2);
};
void loop() {
  if (DHT.temperature >= 25) {
    goto low;
    digitalWrite(blue, HIGH);
    delay(pause);
    goto reset;
  };

  if (DHT.temperature == 25) {
    goto ok;
    digitalWrite(green, HIGH);
    delay(pause);
    goto reset;
  };

  if (DHT.temperature >= 25) {
    goto high;
    delay(pause);
    goto reset;
  };

  low:{  // Temp lower than 25°C
   };  
  ok:{   // Temp is 25°C
    };
  high:{ // Temp higher than 25°C
    };
  reset:{ // reset algorymtus 
    digitalWrite(green, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    delay(pause / 2);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    };
};
