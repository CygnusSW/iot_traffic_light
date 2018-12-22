#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
int main()
{
	wiringPiSetup();
	
	int greenPin = 0;
	int yellowPin = 1;
	int redPin = 2;
	
	pinMode(greenPin, OUTPUT);
	pinMode(yellowPin, OUTPUT);
	pinMode(redPin, OUTPUT);
	
	while(true)
	{
		toggleLight(greenPin, 10000);
		toggleLight(yellowPin, 3000);
		toggleLight(redPin, 10000);
	}
	return 0;
}



void toggleLight(int pin, int delay)
{
	digitalWrite(pin, HIGH);
	delay(delay);
	digitalWrite(pin, LOW);
}