int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 8;
int led5 = 9;
int botao = 2;
boolean estado_botao;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(botao, INPUT);
  digitalWrite(botao, LOW);
}

void loop()
{
  estado_botao = digitalRead(botao);
  
  if(estado_botao == HIGH){
  delay(5000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(3000);
  digitalWrite(led2, LOW);
  delay(1000);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH);
  delay(6000);
  digitalWrite(led4, LOW);
  delay(250);
  digitalWrite(led4, HIGH);
  delay(250);
  digitalWrite(led4, LOW);
  delay(250);
  digitalWrite(led4, HIGH);
  delay(250);
  digitalWrite(led4, LOW);
  delay(250);
  digitalWrite(led4, HIGH);
  delay(250);
  digitalWrite(led4, LOW);
  delay(250);
  digitalWrite(led4, HIGH);
  delay(250);
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  }
  
  else{
   	digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
  }
}