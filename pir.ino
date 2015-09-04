/*
 *constants 
 */
#define trig 9
#define echo 8
#define LED 6
long duration, distance;



void setup() {
//pin modes
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  Serial.println("distance, duration");

}

void loop() {
// sending signals 
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
// sending trigger signals
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
// getting echo signals
  duration = pulseIn(echo,HIGH);
  distance = duration/10;
  Serial.print(distance);
  Serial.print(duration);
  analogWrite(LED,distance);
  Serial.println("");
  // delay
  delay(1000);
}
