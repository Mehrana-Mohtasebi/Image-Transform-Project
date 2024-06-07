/**
 * @file main.cpp
 * A simple C++ program that manipulates an image.
 * Creator of the BenFranklin image used in this project: Eric Sucar  
 * Copyright of the BenFranklin image used in this project: University of Pennsylvania
**/

#include "ImageTransform.h"
#include "uiuc/PNG.h"

int main() {
  uiuc::PNG png, png2, result;

  png.readFromFile("BenFranklin.png");
  result = grayscale(png);
  result.writeToFile("out-grayscale.png");
  
  result = createSpotlight(png, 450, 250);
  result.writeToFile("out-spotlight.png");

  result = illinify(png);
  result.writeToFile("out-illinify.png");

  png2.readFromFile("watermark.png");
  result = watermark(png, png2);
  result.writeToFile("out-watermark.png");
  
  return 0;
}
