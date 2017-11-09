import processing.serial.*;  
Serial port;
int val;
String portnames;
void setup()
{
println(Serial.list()[0]);
portnames = Serial.list()[0];
size(500,500);
frameRate(30);
  port = new Serial(this, portnames, 9600);
  println(port);
}
void draw() {
  while (port.available() > 0) {
    val = port.read();
    println(val);
switch(val)
{
case 1:
background(255);
break;
case 2:
background(120,120,120);
break;
case 3:
background(0);
break;
case 4:
background(255,0,0);
break;
case 5:
background(0,255,0);
break;
case 6:
background(0,0,255);
break;
}

}

}