#include "L298NMini.h"

L298NMini::L298NMini(int in1, int in2, int in3, int in4)
  : m_in1(in1),
    m_in2(in2),
    m_in3(in3),
    m_in4(in4)
{
  pinMode(m_in1, OUTPUT);
  pinMode(m_in2, OUTPUT);
  pinMode(m_in3, OUTPUT);
  pinMode(m_in4, OUTPUT);
}

L298NMini::~L298NMini()
{

}

void L298NMini::forward() {
  digitalWrite(m_in1, HIGH);
  digitalWrite(m_in2, LOW);

  digitalWrite(m_in3, HIGH);
  digitalWrite(m_in4, LOW);
}

void L298NMini::backward() {
  digitalWrite(m_in1, LOW);
  digitalWrite(m_in2, HIGH);

  digitalWrite(m_in3, LOW);
  digitalWrite(m_in4, HIGH);
}

void L298NMini::left() {
  digitalWrite(m_in1, HIGH);
  digitalWrite(m_in2, LOW);

  digitalWrite(m_in3, LOW);
  digitalWrite(m_in4, LOW);
}

void L298NMini::right() {
  digitalWrite(m_in1, LOW);
  digitalWrite(m_in2, LOW);

  digitalWrite(m_in3, HIGH);
  digitalWrite(m_in4, LOW);
}

void L298NMini::stop() {
  digitalWrite(m_in1, LOW);
  digitalWrite(m_in2, LOW);

  digitalWrite(m_in3, LOW);
  digitalWrite(m_in4, LOW);
}
