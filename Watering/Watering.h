#ifndef _WATERING_H
#define _WATERING_H

#define SERIAL_BAUD 115200
#define LED_PIN 13

enum COMMAND {
  WATER_LEVEL = 0,
  SUNLIGHT_LEVEL = 1,
  RELAY_ON = 2,
  RELAY_OFF = 3
};

#endif