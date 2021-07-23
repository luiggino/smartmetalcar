#ifndef SMARTCAR_L298NMINI_H
#define SMARTCAR_L298NMINI_H

#include <Arduino.h>

class L298D {
  public:
    L298D(int pwma, int pmwb, int da, int db);

    ~L298D();

    void forward();
    void forwardLeft();
    void forwardRight();

    void backward();
    void backwardLeft();
    void backwardRight();

    void left();

    void right();

    void stop();

  private:
    int m_pwma;
    int m_pmwb;
    int m_da;
    int m_db;

    int minSpeed = 450;
    int maxSpeed = 1020;
    int noSpeed = 0;
};

#endif //SMARTCAR_L298NMINI_H
