#ifndef MAIN_H
#define MAIN_H

#include "gba.h"
#include "health.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
struct player {
    int charX;
    int charY;
    int charW;
    int charH;
};

struct enemy {
    int enemyX;
    int enemyY;
    int enemyW;
    int enemyH;
};

struct HollowPurple {
    int purpleR;
    int purpleC;
    int purpleSize;
    int purpleVel;
};

struct HollowRed {
    int redR;
    int redC;
    int redSize;
    int redVel;
};

struct HollowBlue {
    int blueR;
    int blueC;
    int blueSize;
    int blueVel;
};

struct platform {
   int x;
   int y;
   int width;
   int height;
};
#endif
