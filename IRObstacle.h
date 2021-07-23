#ifndef SMARTCAR_IROBSTACLE_H
#define SMARTCAR_IROBSTACLE_H

#include <Arduino.h>

class IRObstacle {
public:
    IRObstacle(int pin);

    ~IRObstacle();

    bool hasObstacle();

private:
    int m_pin;
};

#endif //SMARTCAR_IROBSTACLE_H
