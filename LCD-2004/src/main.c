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
//displayLCD_main(row on LCD, "Text 1", number, "Text 2");		
	displayLCD_main(1, "Hello there!", NONE, "NONE");
	displayLCD_main(2, "Temperature: ", temperature, "C");
	displayLCD_main(3, "Humidity: ", rel_humidity, "%");
	displayLCD_main(4, "Enjoy tinkering!", NONE, "NONE");

	return 0;
}