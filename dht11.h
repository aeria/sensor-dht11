#ifndef DHT11_H
#define DHT11_H

#include <Arduino.h>

class dht11
{
  public:
    dht11();
	int readData(int pin);
	double dewPointFast(double celsius, double humidity);
	int humidity;
	int temperature;
	double dewPoint;
};
#endif