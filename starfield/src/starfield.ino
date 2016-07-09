#include <Arduboy.h>

#include "tank.h"
#include "bat.h"
#include "pew.h"
#include "boom.h"

Arduboy arduboy;

/*
 * X and Y positions on the display are from the top left corner, thus a Y of 64 is the bottom of the screen and an X of 128 is the right side of the screen.
 * "Color" or "value" means choosing whether a pixel is lit or not - if color is 0, the pixel is off (black), if color is 1, the pixel is on (white).
 */

static int frameRate = 60;
static int screenWidth = 128;
static int screenHeight = 64;

int spriteSizePx = 8;

int tankX;
int tankY;
int tankCurrentFrame;

const int shootCooldown = 30;
int currentShotCooldown = 0;

const int numBats = 3;

struct t_spaceBat {
  uint8_t X;
  uint8_t Y;
  boolean isActive;
  uint8_t idleAnimationFrame;
  uint8_t hitAnimationFrame;
};

t_spaceBat spaceBats[numBats] = {
  {110, 32, true, 0, 0},
  {104, 7, true, 1, 0},
  {90, 42, true, 1, 0}
};

t_spaceBat *currentHitSpaceBat;

void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.setFrameRate(frameRate);

  tankX = 16;
  tankY = 48;
  tankCurrentFrame = 0;
}

void loop() {
  if (!arduboy.nextFrame()) { return; }
  arduboy.clear();
  handleInput();
  drawStarField();
  drawShootyShootyBoom();
  drawBats();
  drawTank();
  arduboy.display();
}

void handleInput() {
  if (arduboy.pressed(UP_BUTTON)) {
      arduboy.setCursor(62, 4);
      arduboy.print(F("up"));

      if (tankY >= 0) {
        tankY--;
      }
  }

  if (arduboy.pressed(DOWN_BUTTON)) {
      arduboy.setCursor(62, 52);
      arduboy.print(F("down"));

      if (tankY <= screenHeight) {
        tankY++;
      }
  }

  if (arduboy.pressed(LEFT_BUTTON)) {
      arduboy.setCursor(30, 30);
      arduboy.print(F("left"));

      if (tankX >= 0) {
        tankX--;
      }
  }

  if (arduboy.pressed(RIGHT_BUTTON)) {
      arduboy.setCursor(92, 30);
      arduboy.print(F("right"));

      if (tankX <= screenWidth) {
        tankX++;
      }
  }

  if (arduboy.pressed(A_BUTTON) || arduboy.pressed(B_BUTTON)) {
      arduboy.setCursor(1, 1);
      arduboy.print(F("LASER!"));
      if (currentShotCooldown == 0 ) {
        currentShotCooldown = shootCooldown;
      }
  }
}

void drawTank() {
  arduboy.drawBitmap(tankX, tankY, tank[tankCurrentFrame], spriteSizePx, spriteSizePx, WHITE);

  if (arduboy.everyXFrames(16)) {
    tankCurrentFrame++;
    tankCurrentFrame = tankCurrentFrame % 3;
  }
}

void drawBats() {
  for (int i = 0; i < numBats; i++) {
    t_spaceBat *spaceBat = &spaceBats[i];
    if (arduboy.everyXFrames(24)) {
      spaceBat->idleAnimationFrame++;
      spaceBat->idleAnimationFrame = spaceBat->idleAnimationFrame % 2;
    }
    arduboy.drawBitmap(spaceBat->X, spaceBat->Y, bat[spaceBat->idleAnimationFrame], spriteSizePx, spriteSizePx, WHITE);
  }
}

void drawShootyShootyBoom() {
  if (currentShotCooldown > 0) {
    if (currentShotCooldown == shootCooldown) {
      currentHitSpaceBat = NULL;
    }

    if (currentShotCooldown > 20) {
      int laserY = tankY + 4;
      int laserWidth = screenWidth - (tankX + spriteSizePx);

      if (!currentHitSpaceBat) {
        for (int i = 0; i <= numBats; i++) {
          t_spaceBat *spaceBat = &spaceBats[i];
          if (laserY >= spaceBat->Y + 2 && laserY <= spaceBat->Y + 6) {
            laserWidth = spaceBat->X - (tankX + spriteSizePx) + 2;
            currentHitSpaceBat = spaceBat;
          }
        }
      } else {
        laserWidth = currentHitSpaceBat->X - (tankX + spriteSizePx) + 2;
      }

      arduboy.drawFastHLine(tankX + spriteSizePx, laserY, laserWidth, WHITE);
      if (currentShotCooldown > 21) {
        arduboy.drawBitmap(tankX + spriteSizePx, tankY, pew[(30 - currentShotCooldown) / 3], spriteSizePx, spriteSizePx, WHITE);
      }

      if (currentHitSpaceBat && currentShotCooldown > 5) {
        arduboy.drawBitmap(currentHitSpaceBat->X - 4, currentHitSpaceBat->Y - 4, boom[(30 - currentShotCooldown) / 5], 16, 16, WHITE);
      }
    }

    currentShotCooldown--;
  }
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

