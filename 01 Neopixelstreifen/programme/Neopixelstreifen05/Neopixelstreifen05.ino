#include <Adafruit_NeoPixel.h>
int PIN = 6;
int NUMPIXELS = 10;
int intensity = 30;
// Vier Zufallsvariablen:
int randPos;
int randR;
int randG;
int randB;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
  pixels.clear();

  // Initialisierung des Zufallszahlengenerators:
  // Damit der Arduino "Pseudo"-Zufallszahlen produzieren kann, und nicht jedesmal die gleichen
  // Werte zurückgibt, wird dem Zufallszahlengenerator der zufälligen Wert des analgen Pin 0
  // eingespiesen.
  randomSeed(analogRead(0));
}

void loop() {
  // Generieren von vier Zufallszahlen:
  // Zufällige Position: Wert zwischen 0 und NUMPIXELS
  randPos = random(NUMPIXELS);
  // Zufällige Intensität für Rot, Grün und Blau
  randR = random(intensity);
  randG = random(intensity);
  randB = random(intensity);

  // Damit die Farben etwas intensiver werden und nicht zu schnell zu weiss
  // "verschmieren", werden zu kleine Intensitäten nicht beachtet:
  if (randR < 15) {
    randR = 0;
  }
  if (randG < 15) {
    randG = 0;
  }
  if (randB < 15) {
    randB = 0;
  }
  pixels.setPixelColor(randPos, pixels.Color(randR, randG, randB));

  pixels.show();
  delay(500);
}
