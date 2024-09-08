#include <IRremote.h>

IRsend irsend;


void setup() {
Serial.begin(9600);
pinMode(5, INPUT_PULLUP);  //This will turn into the new Power button for the PS2
irsend.setSendPin(3);     //Make sure the Microcontroller you use has a PIN capable of sending PWM signals. set this to any PWM pin.
}

void loop() {

if (digitalRead(5) == LOW)
{
  irsequence();
}
}

int buttonpress(int a) 
{
  switch(a)
  {
    case 25:
      for(int i=0;i<3;i++) // x button
      {
        irsend.sendSony(0x7AB5B, 20); 
        delay(40);
      }
      break;

    case 26:    
      for(int i=0;i<3;i++) // circle button
      {
        irsend.sendSony(0xBAB5B, 20); 
        delay(40);
      }
      break;
    
    case 27:
      for(int i=0;i<3;i++)
      {
        irsend.sendSony(0xA8B5B, 20); //Power button
        delay(40);
      }
      break;
  }
  
}


void irsequence()
{
    buttonpress(27);
    Serial.println("power");
    delay(10250);
    buttonpress(25);
    Serial.println("first x pressed. waiting 2.75 secs");
    delay(2750);
    buttonpress(25);
    Serial.println("second x pressed. waiting 0.85 secs");
    delay(850);
    buttonpress(26);
    Serial.println("first circle pressed. waiting 0.75 secs");
    delay(750);
    buttonpress(26); 
    Serial.println("final circle pressed.");           

}
