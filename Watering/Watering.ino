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
    byte output[4];
    byte numBytes = 0;

    switch( command ) {

      case WATER_LEVEL:
          break;
      case SUNLIGHT_LEVEL:
          break;
      case RELAY_ON:
          digitalWrite(LED_PIN, HIGH);
                    
          // Prepping to send a response
          output[0] = command;
          output[1] = 0;
          numBytes = 2;
          break;
      case RELAY_OFF:
          digitalWrite(LED_PIN, LOW);
                    
          // Prepping to send a response
          output[0] = command;
          output[1] = 0;
          numBytes = 2;
          break;
      default:
          break;

    }

    //Sending a response after the command has completed
    Serial.write(output, numBytes);

  }
}