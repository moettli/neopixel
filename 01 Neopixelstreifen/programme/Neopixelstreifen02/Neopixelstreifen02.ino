/* Verdrahtung:
(5V-Netzteil mit Arduino verbunden)
Arduino --- NeoPixel-Streifen
Vin     --- +5V
Pin 6  --- dPin
GND    --- GND
*/

#include <Adafruit_NeoPixel.h> // Durch diese Zeile wird die Neopixel-Bibliothek eingebunden
int PIN = 6;                   // Dieser Pin wird mit Din verbunden
int NUMPIXELS = 10;            // Anz. Pixel auf Streifen

// In der folgenden Zeile wird eine Instanz "pixels" der Klasse Adafruit_NeoPixel
// erzeugt. Diese Klasse stellt Methoden zu Verfügung, um die Neopixelstreifen
// anzusteuern. Sie müssen diese Zeile nicht im Detail verstehen.
// Der Name "pixels" ist frei wählbar.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // Der Code in der setup()-Methode wird nur einmal zu Beginn ausgeführt:
  pixels.begin(); // INITIALISIERUNG des Neopixelstreifen-Objektes (NOTWENDIG)
}

void loop() {
  // Der Code in der loop()-Methode wird wiederholt ausgeführt.
  // Verschiedene Pixel werden in unterschiedlichen Farben zum leuchten gebracht.
  //
  pixels.setPixelColor(1, pixels.Color(5, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 5, 0));
  pixels.setPixelColor(3, pixels.Color(0, 0, 5));
  pixels.setPixelColor(5, pixels.Color(10, 10, 0));
  pixels.setPixelColor(6, pixels.Color(0, 10, 10));
  pixels.setPixelColor(7, pixels.Color(10, 0, 10));

  // Mit der Methode pixels.show() werden die neu gesetzten Werte an den
  // Streifen übertragen.
  pixels.show();
}
