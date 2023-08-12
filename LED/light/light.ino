int LED_1=4;
int LED_2=5;
int LED_3=6;

void setup() {
  // put your setup code here, to run once:
pinMode(LED_1,OUTPUT);
pinMode(LED_2,OUTPUT);
pinMode(LED_3,OUTPUT);

}

void loop() {
  digitalWrite(LED_1,HIGH);
  delay(500);

  digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,HIGH);
  delay(500);

  digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,HIGH);
  delay(500);

  digitalWrite(LED_3,LOW);
  // put your main code here, to run repeatedly:
}