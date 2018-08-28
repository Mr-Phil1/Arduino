#define RED 2
#define BLUE 3
#define GREEN 4
int pause = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  }

void loop() {
  if(RED == HIGH){ //RED Wieder einschalten
    Serial.println(RED - 1);
    delay(pause / 2);
    digitalWrite(BLUE, LOW);
    delay(pause);
  } else {
      Serial.println(RED - 0);
      delay(pause * 2);
      digitalWrite(RED, HIGH);
      delay(pause * 2);
  }

  if (GREEN == LOW){ // BLUE wieder ausschalten
     Serial.println(BLUE - 0);
     delay(pause / 2);
     digitalWrite(RED, HIGH);
     delay(pause);    
    } else {
        Serial.println(BLUE - 1);
        digitalWrite(BLUE, LOW);
      
      }

  if (BLUE == LOW){
    Serial.println(BLUE - 0);
    delay(pause);
    digitalWrite(GREEN, LOW);
    delay(pause);
    } else {
      delay(pause * 5);
      }
  }
    
