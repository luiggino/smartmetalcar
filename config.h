#ifndef CONFIG_H
#define CONFIG_H

#include "IRObstacle.h"
#include "L298D.h"

int pwma = 5;
int da = 0;

int pmwb = 4;
int db = 2;

L298D l298D(pwma, pmwb, da, db);

#endif //CONFIG_H
