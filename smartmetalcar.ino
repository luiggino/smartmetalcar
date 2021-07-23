#include <Arduino.h>
#include "config.h"


void setup() {
  Serial.begin(9600);
  Serial.println("setup init");
}

void loop() {
  Serial.println("backward");
  l298D.backward();
  delay(15000);
  /*l298D.backwardLeft();
  delay(3000);
  l298D.backwardRight();
  delay(3000);
*/
  l298D.stop();
  delay(3000);
  
  Serial.println("forward");
  l298D.forward();
  delay(10000);
  /*l298D.forwardLeft();
  delay(3000);
  l298D.forwardRight();
  delay(3000);

  l298D.stop();
  delay(3000);

  l298D.left();
  delay(3000);
  l298D.right();
  delay(3000);
  */
  //bool frontObstacle = iRObstacleLeft.hasObstacle() || iRObstacleRight.hasObstacle();

/*
  if (frontObstacle) {
    Serial.println("backward");
    l298NMini.backward();
  } else {
    Serial.println("forward");
    l298NMini.forward();
  }*/

  /*Serial.print("iRObstacleBack ");
  Serial.println(iRObstacleBack.hasObstacle());
  
      if (iRObstacleBack.hasObstacle()) {
        Serial.println("forward back");
        l298NMini.forward();
      } else {
        Serial.println("backward back");
        l298NMini.backward();
      }
  */
  delay(1000);
}
