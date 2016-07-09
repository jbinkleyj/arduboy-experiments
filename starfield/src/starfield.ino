#include <Arduboy.h>

#include "tank.h"

Arduboy arduboy;

/*
 * X and Y positions on the display are from the top left corner, thus a Y of 64 is the bottom of the screen and an X of 128 is the right side of the screen.
 * "Color" or "value" means choosing whether a pixel is lit or not - if color is 0, the pixel is off (black), if color is 1, the pixel is on (white).
 */

static int frameRate = 60;

void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.setFrameRate(frameRate);
}

void loop() {
  if (!arduboy.nextFrame()) { return; }
  arduboy.clear();
  handleInput();
  drawTank();
  drawStarField();
  arduboy.display();
}

void handleInput() {
  if (arduboy.pressed(UP_BUTTON)) {
      arduboy.setCursor(62, 4);
      arduboy.print(F("up"));
  }

  if (arduboy.pressed(DOWN_BUTTON)) {
      arduboy.setCursor(62, 52);
      arduboy.print(F("down"));
  }

  if (arduboy.pressed(LEFT_BUTTON)) {
      arduboy.setCursor(30, 30);
      arduboy.print(F("left"));
  }

  if (arduboy.pressed(RIGHT_BUTTON)) {
      arduboy.setCursor(92, 30);
      arduboy.print(F("right"));
  }

  if (arduboy.pressed(A_BUTTON)) {
      arduboy.setCursor(1, 1);
      arduboy.print(F("A"));
  }

  if (arduboy.pressed(B_BUTTON)) {
      arduboy.setCursor(122, 1);
      arduboy.print(F("B"));
  }
}

void drawTank() {
}

byte movingStar[11][2] = {{84, 9}, {67, 14}, {109, 19}, {27, 24}, {9, 29}, {96, 34}, {31, 39}, {45, 44}, {82, 49}, {19, 54}, {57, 59}};
byte fastMovingStar[11][2] = {{16, 10}, {125, 15}, {62, 20}, {79, 25}, {115, 30}, {104, 35}, {16, 40}, {117, 45}, {65, 50}, {98, 55}, {23, 60}};
byte stillStar[11][2] = {{84, 7}, {67, 12}, {109, 17}, {27, 22}, {9, 27}, {96, 32}, {31, 37}, {45, 42}, {82, 47}, {19, 52}, {57, 57}};

void drawStarField()
{
  for (byte i = 0; i < 11; i++)
  {
    if (arduboy.everyXFrames(1))
    {
      fastMovingStar[i][0]--;
      if (fastMovingStar[i][0] < 1) fastMovingStar[i][0] = 127;
      arduboy.drawPixel(fastMovingStar[i][0], fastMovingStar[i][1], WHITE);
    }

    if (arduboy.everyXFrames(2))
    {
      movingStar[i][0]--;
      if (movingStar[i][0] < 1) movingStar[i][0] = 127;
      arduboy.drawPixel(movingStar[i][0], movingStar[i][1], WHITE);
    }

    if (arduboy.everyXFrames(3))
    {
      stillStar[i][0]--;
      if (stillStar[i][0] < 1) stillStar[i][0] = 127;
      arduboy.drawPixel(stillStar[i][0], stillStar[i][1], WHITE);
    }

  }
}

