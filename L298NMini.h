#ifndef SMARTCAR_L298NMINI_H
#define SMARTCAR_L298NMINI_H

#include <Arduino.h>

class L298NMini {
public:
    L298NMini(int in1, int in2, int in3, int in4);

    ~L298NMini();

    void forward();

    void backward();

    void left();

    void right();

    void stop();

private:
    int m_in1;
    int m_in2;
    int m_in3;
    int m_in4;
};

#endif //SMARTCAR_L298NMINI_H
