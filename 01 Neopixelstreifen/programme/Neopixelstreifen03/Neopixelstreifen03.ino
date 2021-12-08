/* Verdrahtung:
(5V-Netzteil mit Arduino verbunden)
Arduino --- NeoPixel-Streifen
Vin     --- +5V
Pin 6  --- dPin
GND    --- GND
*/

#include <Adafruit_NeoPixel.h>
int PIN = 6;
int NUMPIXELS = 10;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {
  /*
  Die einzelnen LEDs werden in folgendem Beispiel durch eine for-Schleife ein-
  und ausgeschaltet. Die Position wird dabei nicht direkt angegeben, sondern durch
  die Variable i, welche Werte zwischen 0 und 9 durchläuft.
  */
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 30, 30));
    pixels.setPixelColor(i-1, pixels.Color(0, 0, 0));
    pixels.show();
    delay(200);
  }

  pixels.clear(); // Mit diesem Befehl werden alle LEDs ausgeschaltet.
}
