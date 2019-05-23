const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
void setup()
{
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(115200);

}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  //calculate the distance
  distance=duration*0.032/2;
  Serial.print("Distance:");
  Serial.println(distance);
   if(distance<170)
   {
     digitalWrite(2,HIGH);
   }
   else
   {
      digitalWrite(2,LOW);
   }    
}


  
  
