#include <Adafruit_NeoPixel.h>

#define PIN 9
#define COUNT_LED 64 // Number of led

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(COUNT_LED, PIN, NEO_RGB + NEO_KHZ800);

void setup() {
  pixels.begin();
  pixels.show();  
}


void loop() {
  for (int i=0;i<=63;i++) {
    pixels.setPixelColor(i, pixels.Color(0, 0, 250));
    pixels.show();
  }  
}
