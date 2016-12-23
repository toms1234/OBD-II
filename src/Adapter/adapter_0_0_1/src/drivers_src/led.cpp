/*
 * led.cpp
 *
 *  Created on: 2016年12月22日
 *      Author: Topon-Edison
 */



#include "adapter_board.h"
#include "led.h"


using namespace std;


/* Factory of the Led */
Led* Led::instance()
{
	static Led ins;
	return (&ins);
}



/* Lighten the led indicating TX signal */
void Led::Lighten_Led_TX()
{
	Board_Lighten_TX_LED();
}

/* Lighten the led indicating RX signal */
void Led::Lighten_Led_RX()
{
	Board_Lighten_RX_LED();
}

/* Off the led indicating TX signal */
void Led::Off_Led_TX()
{
	Board_Off_TX_LED();
}

/* Off the led indicating RX signal */
void Led::Off_Led_RX()
{
	Board_Off_RX_LED();
}



/* Toggle the led indicating TX signal */
void Led::Toggle_Led_TX()
{
	Board_Toggle_TX_LED();
}

/* Toggle the led indicating RX signal */
void Led::Toggle_Led_RX()
{
	Board_Toggle_RX_LED();
}



/* Constructor */
Led::Led():tx_count(0),rx_count(0)
{

}

/* Destructor */
Led::~Led()
{

}



