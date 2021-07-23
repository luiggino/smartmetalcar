#include "IRObstacle.h"

IRObstacle::IRObstacle(int pin)
: m_pin(pin)
{
    pinMode(m_pin, INPUT);
}

IRObstacle::~IRObstacle()
{

}

bool IRObstacle::hasObstacle()
{
    int state= digitalRead(m_pin);

    return state == LOW;
}
