
 #define RED 22     
 #define BLUE 24     
 #define GREEN 23
#define LED_PWR 25

// the PWM pin the LED is attached to   
int r_brightness = 0;    // how bright the LED is
int g_brightness = 0;    // how bright the LED is
int b_brightness = 0;    // how bright the LED is

int r_fadeAmount = 3;    // how many points to fade the LED by
int g_fadeAmount = 4;    // how many points to fade the LED by
int b_fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin  to be an output:
  // intitialize the digital Pin as an output
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(LED_PWR, OUTPUT);

  digitalWrite(LED_PWR, LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin:
  analogWrite(RED, r_brightness);
  analogWrite(BLUE, g_brightness);
  analogWrite(GREEN, b_brightness);

  // change the brightness for next time through the loop:
  r_brightness = r_brightness + r_fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (r_brightness <= 0 || r_brightness >= 255) {
    r_fadeAmount = -r_fadeAmount;
  }

  // change the brightness for next time through the loop:
  g_brightness = g_brightness + g_fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (g_brightness <= 0 || g_brightness >= 255) {
    g_fadeAmount = -g_fadeAmount;
  }

  // change the brightness for next time through the loop:
  b_brightness = b_brightness + b_fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (b_brightness <= 0 || b_brightness >= 255) {
    b_fadeAmount = -b_fadeAmount;
  }

  // wait for 30 milliseconds to see the dimming effect
  delay(50);
}

