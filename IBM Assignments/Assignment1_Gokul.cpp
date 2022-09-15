int alarm=12;
int motion=2;
int led=4;
void setup()
{
  Serial.begin(9600);
  pinMode(motion,INPUT);
  pinMode(alarm,OUTPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  double data=analogRead(A3);
  double n=data/1024;
  double volt=n*5;
  double off=volt-0.5;
  double temperature=off*100;
  Serial.print("Temperature :");
  Serial.println(temperature);
  if(temperature>60){
    tone(12,200,100);
  }
  if(digitalRead(motion) == HIGH){
    digitalWrite(led,HIGH);
    for(int i=0;i<255;i++){
        delay(1);
        int x = (i*i*i)%255;
      	analogWrite(alarm,x);
    }
    analogWrite(alarm,0);
    digitalWrite(led,LOW);
    delay(100);
  }
}
