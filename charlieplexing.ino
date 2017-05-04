int SW = 13;
int LED1 = 1;
int LED2 = 2;
int LED3 = 3;
int LED4 = 4;
int LED5 = 9;
int LED6 = 6;
int LED7 = 7;
int RD;
int ST;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, HIGH);
  pinMode(LED2, HIGH);
  pinMode(LED3, HIGH);
  pinMode(LED4, HIGH);
  pinMode(LED5, HIGH);
  pinMode(LED6, HIGH);
  pinMode(LED7, HIGH);
  pinMode(SW, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ST = digitalRead(SW);
  if (ST == LOW){
    RD = random(1,7);
    delay(10);
  } else if (RD == 1){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
    digitalWrite(LED7,HIGH);
    digitalWrite(LED4,LOW);

  } else if (RD == 2){
    digitalWrite(LED4,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED6,LOW);
    digitalWrite(LED7,LOW);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED5,LOW);
  } else if (RD == 3){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,LOW);
    digitalWrite(LED7,HIGH);
  } else if (RD == 4){

    digitalWrite(LED2,LOW);
    digitalWrite(LED6,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED5,LOW);
    digitalWrite(LED7,LOW);
  } else if (RD == 5){
    digitalWrite(LED6,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,LOW);
    digitalWrite(LED7,HIGH);
  } else if (RD == 6){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,HIGH);
    digitalWrite(LED7,LOW);
  }
}
