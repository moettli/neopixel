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
  // Mit der Methode pixels.Color() wird die Farbe der LED definiert:
  // Jede LED besteht eigentlich aus 3 LED, einer roten, einer grünen und einer
  // blauen, deren Helligkeit 256 Werte (0 bis 255) annehmen kann.

  // Mit der Methode pixels.setPixelColor() wird einerseits bestimmt, welches Pixel
  // leuchtet, und andererseits in welcher Farbe.
  // So setzt folgender Befehl LED Nummer 3 auf die Farbe Grün:
  pixels.setPixelColor(3, pixels.Color(0, 10, 0));

  // Mit der Methode pixels.show() werden die neu gesetzten Werte an den
  // Streifen übertragen.
  pixels.show();   // Send the updated pixel colors to the hardware.
}
