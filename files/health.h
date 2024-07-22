#ifndef HEALTH_H
#define HEALTH_H

#include "gba.h"

struct healthBar {
    int x;
    int y;
    int width;
    int height;
    int max;
    int curr;
    u16 color;
};

void initializeHealth(struct healthBar* healthBar, int x, int y, int width, int height, int max, u16 color);
void drawHealth(struct healthBar* healthBar);
void updateHealth(struct healthBar* healthBar, int damage);

#endif