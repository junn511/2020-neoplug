#include "Light.h"
#include <Adafruit_NeoPixel.h>

//LED 3つ, D4に接続
Adafruit_NeoPixel pixel = Adafruit_NeoPixel(2, 4, NEO_GRB + NEO_KHZ800);



void init_light();
void onLight();
void offLight();

int blink_count = 0;

void init_light(){
  pixel.begin();
}

void onLight(){
  for(uint8_t r = 0; r <255; r++) {
     for(uint8_t i=0; i < pixel.numPixels(); i++) {
        pixel.setPixelColor(i, r, 35, 0);
     }
     pixel.setBrightness(255);
     pixel.show();
//     delay(wait);
  };
  
//  pixel.setPixelColor(0, pixel.Color(255,168,97)); //一番最初のLEDは０番です
//  pixel.setPixelColor(1, pixel.Color(255,168,97)); //一番最初のLEDは０番です
//  pixel.setBrightness(255);
//  pixel.show();
}

void offLight(){
  pixel.setPixelColor(0, pixel.Color(0,0,0)); //一番最初のLEDは０番です
  pixel.setPixelColor(1, pixel.Color(0,0,0)); //一番最初のLEDは０番です
  pixel.setBrightness(0);
  pixel.show();
}
