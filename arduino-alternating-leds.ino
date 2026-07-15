/*
  Project: Alternating LED Blinker

  Description:
  The red LED blinks three times.
  After that, the yellow LED blinks three times.
  The sequence repeats continuously.
*/

int LedPinRed = 9;  // Arduino pin connected to the red LED
int LedPinYellow = 10;  // Arduino pin connected to the yellow LED
int delayonTime1 = 250;  // How long the red LED remains ON, in milliseconds
int delayonTime2 = 250;  // How long the yellow LED remains ON, in milliseconds
int delayoffTime1 = 250;  // How long the red LED remains OFF, in milliseconds
int delayoffTime2 = 250;  // How long the yellow LED remains OFF, in milliseconds
int redBlinkTime = 3;  // Number of times the red LED should blink
int yellowBlinkTime = 3;  // Number of times the yellow LED should blink
int i;  // Counter used by the red LED for loop
int j;  // Counter used by the yellow LED for loop



void setup()  // setup() runs once when the Arduino is powered on or reset
{
  pinMode(LedPinRed, OUTPUT);  // Configure the red LED pin as an output pin
  pinMode(LedPinYellow, OUTPUT);  // Configure the yellow LED pin as an output pin
}



void loop()  // loop() runs repeatedly after setup() finishes
{
  // Repeat the red LED blinking sequence
  // until it has blinked redBlinkTime times
  for (i = 1; i <= redBlinkTime; i++)
  {
    
    digitalWrite(LedPinRed, HIGH);  // Turn the red LED on  
    delay(delayonTime1);  // Keep the red LED on for 250 milliseconds
    digitalWrite(LedPinRed, LOW);  // Turn the red LED off
    delay(delayoffTime1);  // Keep the red LED off for 250 milliseconds
  }


  // Repeat the yellow LED blinking sequence
  // until it has blinked yellowBlinkTime times
  for (j = 1; j <= yellowBlinkTime; j++)
  {
    digitalWrite(LedPinYellow, HIGH);  // Turn the yellow LED on  
    delay(delayonTime2);  // Keep the yellow LED on for 250 milliseconds
    digitalWrite(LedPinYellow, LOW);  // Turn the yellow LED off
    delay(delayoffTime2);  // Keep the yellow LED off for 250 milliseconds
  }
}