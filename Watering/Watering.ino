#include "Watering.h"

void setup () {

  //Init serial connection
  Serial.begin(SERIAL_BAUD);

  //Init LED Pin
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

}

void loop() {

  if ( Serial.available() ) {

    byte command = Serial.read();

    switch( command ) {

      case WATER_LEVEL:
          break;
      case SUNLIGHT_LEVEL:
          break;
      case RELAY_ON:
          digitalWrite(LED_PIN, HIGH);
          break;
      case RELAY_OFF:
          digitalWrite(LED_PIN, LOW);
          break;
      default:
          break;

    }
  }
}