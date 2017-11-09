long durationa,durationb ; 
void setup() {
pinMode(3,INPUT);//sens1echo
pinMode(5,INPUT);//sens2echo
pinMode(4,OUTPUT);//sens1trig
pinMode(6,OUTPUT); //sens2trig 
Serial.begin(9600);
}

void loop() {



digitalWrite(4,LOW);
delay(10);
digitalWrite(6,LOW);
delayMicroseconds(2);
digitalWrite(4,HIGH);
delay(250);
digitalWrite(6,HIGH);
delayMicroseconds(1000);
digitalWrite(4,LOW);
digitalWrite(6,LOW);
durationa = pulseIn(3,LOW);
durationb = pulseIn(5,LOW);

if ( durationa == "1176" && durationb == "2000")
{
  Serial.print("Right sweep");
  //action desired
   Serial.write("1"):
  }
 if ( durationa == "2000" && durationb == "1176")
{
  Serial.print("Left sweep");
 Serial.write("2"):
 //action desired
  }

 if ((3 == HIGH) && (5 == HIGH));
{
  Serial.print("both high");
  Serial.write("3"):
  //action desired  
  }
 if ((3 == HIGH) && (5 == LOW))
{
  Serial.print("left high");
  //Action desired
  Serial.write("4"):
  }
  if ((3 == LOW) && (5 == HIGH))
{
  Serial.print("right high");
 Serial.write("5"):
  //Action desired
  }
 if ((3 == LOW)&& (5 == LOW))
{
  Serial.write("6"):
  Serial.print("BOTH low");
  //Action desired
  }

}
