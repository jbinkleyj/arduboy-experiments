#include <Arduboy.h>

Arduboy arduboy;

/*
 * X and Y positions on the display are from the top left corner, thus a Y of 64 is the bottom of the screen and an X of 128 is the right side of the screen.
 * "Color" or "value" means choosing whether a pixel is lit or not - if color is 0, the pixel is off (black), if color is 1, the pixel is on (white).
 */

static int maxX = 128;
static int maxY = 46;

static int frameRate = 15;

int curX, curY;

void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.setFrameRate(frameRate);

  curX = 1;
  curY = 1;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (arduboy.nextFrame()) {
    return;
  }

  arduboy.clear();

  writeMessage(curX, curY);

  increment(&curX, &maxX);
  increment(&curY, &maxY);

  arduboy.display();
}

void writeMessage(int x, int y) {
   arduboy.setCursor(curX, curY);
   arduboy.print(F("John loves Emma"));
}

void increment(int *current, int *max) {
  if (*current > *max) {
    *current = 1;
  } else {
    (*current)++;
  }
}

