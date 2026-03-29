//Blink the led at GPIO pin 45 1045 for kalunga s2
#include <Adafruit_NeoPixel.h>

// On the Kaluga v1.3, the WS2812 is on Pin 45
#define PIN        45 
#define NUMPIXELS  1 

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // Initialize the NeoPixel strip object
  pixels.setBrightness(50); // Set brightness to 50 (out of 255) to save your eyes!
}

void loop() {
  // Turn LED ON (Cyan: Red=0, Green=255, Blue=255)
  pixels.setPixelColor(0, pixels.Color(0, 255, 255));
  pixels.show();
  delay(1000);

  // Turn LED OFF (All colors = 0)
  pixels.clear();
  pixels.show();
  delay(1000);
}
