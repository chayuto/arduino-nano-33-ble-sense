# Arduino Nano 33 BLE Sense board

Arduino Nano 33 BLE Sense board has been designed to offer a power savvy and cost effective solution for makers seeking to have Bluetooth® Low Energy connectivity in their projects. 

it is based on a NINA B306 module, that hosts a Nordic nRF52480 that contains a Cortex M4F microcontroller. The Nano 33 BLE Sense is the same as the Arduino Nano 33 BLE with the addition of a set of sensors

- 9 axis inertial sensor: what makes this board ideal for wearable devices
- humidity, and temperature sensor: to get highly accurate measurements of the environmental conditions
- barometric sensor: you could make a simple weather station
- microphone: to capture and analyse sound in real time
- gesture, proximity, light color and light intensity sensor : estimate the room’s luminosity, but also whether someone is moving close to the board


# Sensors

## IMU for Motion Detection
The LSM9DS1 inertial measurement unit features a 3D accelerometer, gyroscope and magnetometer and allows you to detect orientation, motion or vibrations 

## Omnidirectional Digital Microphone

The MP34DT05 microphone allows to capture and analyze sound in real time and can be used to create a voice interface

## Proximity and Gesture Detection
The APDS-9960 chip allows for measuring digital proximity and ambient light as well as for detecting RGB colors and gestures.

## Barometric Pressure Sensor
The LPS22HB picks up on barometric pressure and allows for a 24-bit pressure data output between 260 to 1260 hPa. This data can also be processed to calculate the height above sea level of the current location.

## Temperature and Humidity Detection
The HTS221 capacitive digital sensor measures relative humidity and temperature. It has a temperature accuracy of ± 0.5 °C (between 15-40 °C) and is thereby perfectly suited to detect ambient temperature.

# Side notes

The microcontroller on the Arduino Nano 33 BLE Sense runs at 3.3V, which means that you must never apply more than 3.3V to its Digital and Analog pins. Care must be taken when connecting sensors and actuators to assure that this limit of 3.3V is never exceeded. Connecting higher voltage signals, like the 5V commonly used with the other Arduino boards, will damage the Arduino Nano 33 BLE Sense.

To avoid such risk with existing projects, where you should be able to pull out a Nano and replace it with the new Nano 33 BLE Sense, we have the 5V pin on the header, positioned between RST and A7 that is not connected as default factory setting. This means that if you have a design that takes 5V from that pin, it won't work immediately, as a precaution we put in place to draw your attention to the 3.3V compliance on digital and analog inputs.

5V on that pin is available only when two conditions are met: you make a solder bridge on the two pads marked as VUSB and you power the Nano 33 BLE Sense through the USB port. If you power the board from the VIN pin, you won't get any regulated 5V and therefore even if you do the solder bridge, nothing will come out of that 5V pin. The 3.3V, on the other hand, is always available and supports enough current to drive your sensors. Please make your designs so that sensors and actuators are driven with 3.3V and work with 3.3V digital IO levels. 5V is now an option for many modules and 3.3V is becoming the standard voltage for electronic ICs.