/*******************************/
/*** Created by Ovidiu Sabau ***/
/***	7th January 2022	 ***/
/*******************************/

/*----------------- Include -------------------*/
#include "LCD.h"

/*-------------- Main function ----------------*/
int main(void)
{
	uint8_t temperature = 25; //C
	uint8_t rel_humidity = 65; //%
	
	initLCD();
	
	//updateLCDScreen(row on LCD, "Text 1", number, "Text 2");
	updateLCDScreen(1, "Hello there!", NONE, "NONE");
	updateLCDScreen(2, "Temperature: ", temperature, "C");
	updateLCDScreen(3, "Humidity: ", rel_humidity, "%");
	updateLCDScreen(4, "Enjoy tinkering!", NONE, "NONE");
		
	return 0;
}