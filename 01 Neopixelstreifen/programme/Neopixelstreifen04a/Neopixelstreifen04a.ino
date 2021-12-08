#include <Adafruit_NeoPixel.h>
int PIN = 6;
int NUMPIXELS = 10;
int MaxIntensitaet = 30;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {
  // Pulsierende LED:
  for (int i = 0; i < MaxIntensitaet; i++) {
    pixels.setPixelColor(0, pixels.Color(0, i, i));
    pixels.setPixelColor(4, pixels.Color(i, 0, i));
    pixels.show();
    delay(10);
  }
  for (int i = MaxIntensitaet; i > 0; i--) {
    pixels.setPixelColor(0, pixels.Color(0, i, i));
    pixels.setPixelColor(4, pixels.Color(i, 0, i));
    pixels.show();
    delay(10);
  }
}
