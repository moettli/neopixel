#include <Adafruit_NeoPixel.h>
int PIN = 6;
int NUMPIXELS = 10;
int MaxIntensitaet = 27;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {
  // Pulsierende LED:
  for (int i = 0; i < MaxIntensitaet; i++) {
    pixels.setPixelColor(0, pixels.Color(0, i % MaxIntensitaet, 0));
    pixels.setPixelColor(1, pixels.Color(0, (i + 3) % MaxIntensitaet, 0));
    pixels.setPixelColor(2, pixels.Color(0, (i + 6) % MaxIntensitaet, 0));
    pixels.setPixelColor(3, pixels.Color(0, (i + 9) % MaxIntensitaet, 0));
    pixels.setPixelColor(4, pixels.Color(0, (i + 12) % MaxIntensitaet, 0));
    pixels.setPixelColor(5, pixels.Color(0, (i + 15) % MaxIntensitaet, 0));
    pixels.setPixelColor(6, pixels.Color(0, (i + 18) % MaxIntensitaet, 0));
    pixels.setPixelColor(7, pixels.Color(0, (i + 21) % MaxIntensitaet, 0));
    pixels.setPixelColor(8, pixels.Color(0, (i + 24) % MaxIntensitaet, 0));
    pixels.setPixelColor(9, pixels.Color(0, (i + 27) % MaxIntensitaet, 0));
    pixels.show();
    delay(40);
  }
  for (int i = MaxIntensitaet; i > 0; i--) {
    pixels.setPixelColor(0, pixels.Color(0, i % MaxIntensitaet, 0));
    pixels.setPixelColor(1, pixels.Color(0, (i + 3) % MaxIntensitaet, 0));
    pixels.setPixelColor(2, pixels.Color(0, (i + 6) % MaxIntensitaet, 0));
    pixels.setPixelColor(3, pixels.Color(0, (i + 9) % MaxIntensitaet, 0));
    pixels.setPixelColor(4, pixels.Color(0, (i + 12) % MaxIntensitaet, 0));
    pixels.setPixelColor(5, pixels.Color(0, (i + 15) % MaxIntensitaet, 0));
    pixels.setPixelColor(6, pixels.Color(0, (i + 18) % MaxIntensitaet, 0));
    pixels.setPixelColor(7, pixels.Color(0, (i + 21) % MaxIntensitaet, 0));
    pixels.setPixelColor(8, pixels.Color(0, (i + 24) % MaxIntensitaet, 0));
    pixels.setPixelColor(9, pixels.Color(0, (i + 27) % MaxIntensitaet, 0));
    pixels.show();
    delay(40);
  }
}
