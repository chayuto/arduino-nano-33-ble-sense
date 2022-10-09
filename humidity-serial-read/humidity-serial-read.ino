/*
  The circuit:
  - Arduino Nano 33 BLE Sense
*/

#include <Arduino_HTS221.h>

int proximity = 0;
int r = 0, g = 0, b = 0;

void setup() {
  
  Serial.begin(9600);
  while (!Serial);

  if (!HTS.begin()) {
    Serial.println("Failed to initialize humidity temperature sensor!");
    while (1);
  }

}

void loop() {


  float humidity    = HTS.readHumidity();

  Serial.println(humidity);

  // wait 1 second to print again   
  delay(1000);

}
