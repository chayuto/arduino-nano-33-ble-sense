// How to control the RGB Led and Power Led of the Nano 33 BLE boards.  

 #define RED 22     
 #define BLUE 24     
 #define GREEN 23
 #define LED_PWR 25

void setup() {
 
 // intitialize the digital Pin as an output
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(LED_PWR, OUTPUT);

  digitalWrite(LED_PWR, LOW);
}

// the loop function runs over and over again
void loop() {
  digitalWrite(RED, LOW); // turn the LED off by making the voltage LOW
  delay(500);            // wait for a second
  digitalWrite(GREEN, LOW);
  delay(500);  
  digitalWrite(BLUE, LOW);
  delay(500);  
  digitalWrite(RED, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(500);                         
  digitalWrite(GREEN, HIGH);
  delay(500);  
  digitalWrite(BLUE, HIGH);
  delay(500);  
}