#define trig 9
#define echo 8
#define LED 6
long duration, distance;



void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 digitalWrite(trig,LOW);
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
 
 duration = pulseIn(echo,HIGH);
 distance = (duration/2)/29.1;
 
 if(distance >= 400 || distance <= 2){
   Serial.println("Out Of Range");
   digitalWrite(LED,HIGH);
 }else {
   digitalWrite(LED,LOW);
   Serial.print(distance);
   Serial.println(" cm");
 }
 
 delay(100);
}
