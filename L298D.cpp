#include "L298D.h"

L298D::L298D(int pwma, int pmwb, int da, int db)
  : m_pwma(pwma),
    m_pmwb(pmwb),
    m_da(da),
    m_db(db)
{
  pinMode(m_pwma, OUTPUT);
  pinMode(m_pmwb, OUTPUT);
  pinMode(m_da, OUTPUT);
  pinMode(m_db, OUTPUT);

  digitalWrite(RightMotorSpeed, m_pwma);
  digitalWrite(LeftMotorSpeed, m_pwma);
  digitalWrite(RightMotorDir, m_pmwb);
  digitalWrite(LeftMotorDir,m_db);
}

L298D::~L298D()
{

}

void L298D::forward()
{
  digitalWrite(m_pwma, HIGH);
  digitalWrite(m_pmwb, HIGH);
  
  analogWrite(m_da, maxSpeed);  
  analogWrite(m_db, maxSpeed);
}

void L298D::forwardLeft()
{
  digitalWrite(m_pwma, LOW);
  analogWrite(m_da, LOW);

  digitalWrite(m_pmwb, HIGH);
  analogWrite(m_db, LOW);
}

void L298D::forwardRight()
{
  digitalWrite(m_pwma, HIGH);
  analogWrite(m_da, LOW);

  digitalWrite(m_pmwb, LOW);
  analogWrite(m_db, LOW);
}

void L298D::backward()
{
  digitalWrite(m_pwma, LOW);
  digitalWrite(m_pmwb, LOW);
  
  analogWrite(m_da, maxSpeed);  
  analogWrite(m_db, maxSpeed);
}

void L298D::backwardLeft()
{
  digitalWrite(m_pwma, LOW);
  analogWrite(m_da, LOW);

  digitalWrite(m_pmwb, HIGH);
  analogWrite(m_db, HIGH);
}

void L298D::backwardRight()
{
  digitalWrite(m_pwma, HIGH);
  analogWrite(m_da, HIGH);

  digitalWrite(m_pmwb, LOW);
  analogWrite(m_db, LOW);
}

void L298D::left()
{
  digitalWrite(m_pwma, 450);
  analogWrite(m_da, HIGH);

  digitalWrite(m_pmwb, 450);
  analogWrite(m_db, LOW);
}

void L298D::right()
{
  digitalWrite(m_pwma, 450);
  analogWrite(m_da, LOW);

  digitalWrite(m_pmwb, 450);
  analogWrite(m_db, HIGH);
}

void L298D::stop()
{
  /*digitalWrite(m_pwma, LOW);
  digitalWrite(m_pmwb, LOW);*/
  
  analogWrite(m_da, noSpeed);  
  analogWrite(m_db, noSpeed);
}
