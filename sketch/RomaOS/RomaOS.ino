// ILI9488 Display Test — fills screen with RED
// If screen shows red = wiring OK!
// If white = SPI problem
#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();
void setup() {
  Serial.begin(115200);
  Serial.println("Display test start");
  tft.init();
  tft.setRotation(1);
  Serial.println("Init done");
  tft.fillScreen(TFT_RED);
  Serial.println("Fill RED done");
  delay(2000);
  tft.fillScreen(TFT_GREEN);
  Serial.println("Fill GREEN done");
  delay(2000);
  tft.fillScreen(TFT_BLUE);
  Serial.println("Fill BLUE done");
  delay(2000);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.setTextSize(3);
  tft.setCursor(20, 100);
  tft.println("RomaOS OK!");
  Serial.println("All done!");
}
void loop() { delay(1000); }