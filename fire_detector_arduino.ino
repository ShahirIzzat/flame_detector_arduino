#define FLAME 2
#define ALARM 8

int LED = 5;

void setup() 
{
  Serial.begin(9600);
  Serial.println("Hello, I am Fire Detector");
  pinMode(FLAME, INPUT);
  pinMode(ALARM, OUTPUT);
  pinMode(LED,OUTPUT);
}

void loop() 
{
  int fire = digitalRead(FLAME);

  if( fire == HIGH )
  {
    digitalWrite(ALARM,HIGH);
    digitalWrite(LED,HIGH);
    Serial.println("FIRE IS DETECTED\n");
  }

  else
  {
    digitalWrite(ALARM,LOW);
    digitalWrite(LED,LOW);
    Serial.println("You are SAFE\n");
  }

  delay(200);

}
