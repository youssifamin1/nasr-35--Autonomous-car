/*
 * DC_MOTOR.c
 *
  * Created: 28/8/2023 9:1:3 AM
 *  Author: youssif
 */ 

#include "DC_MOTOR.h"

void m_forward(void){
	DIO_WriteChannel(EN1,STD_High);
	DIO_WriteChannel(EN2,STD_High);
	DIO_WriteChannel(DIO_ChannelC3,STD_Low);
	DIO_WriteChannel(DIO_ChannelC5,STD_Low);
	DIO_WriteChannel(DIO_ChannelC4,STD_High);
	DIO_WriteChannel(DIO_ChannelC6,STD_High);
	DIO_WriteChannel(EN1_1,STD_High);
	DIO_WriteChannel(EN2_2,STD_High);
	DIO_WriteChannel(DIO_ChannelD7,STD_High);
	DIO_WriteChannel(DIO_ChannelD6,STD_Low);
	DIO_WriteChannel(DIO_ChannelC1,STD_High);
	DIO_WriteChannel(DIO_ChannelC0,STD_Low);
}

void backward(void){
	DIO_WriteChannel(EN1,STD_High);
	DIO_WriteChannel(EN2,STD_High);
	DIO_WriteChannel(DIO_ChannelC3,STD_High);
	DIO_WriteChannel(DIO_ChannelC5,STD_High);
	DIO_WriteChannel(DIO_ChannelC4,STD_Low);
	DIO_WriteChannel(DIO_ChannelC6,STD_Low);
   	DIO_WriteChannel(EN1_1,STD_High);
   	DIO_WriteChannel(EN2_2,STD_High);
   	DIO_WriteChannel(DIO_ChannelD7,STD_Low);
   	DIO_WriteChannel(DIO_ChannelD6,STD_High);
	DIO_WriteChannel(DIO_ChannelC1,STD_Low);
	DIO_WriteChannel(DIO_ChannelC0,STD_High);

}

void stop(void){
	DIO_WriteChannel(DIO_ChannelC3,STD_Low);
	DIO_WriteChannel(DIO_ChannelC5,STD_Low);
	DIO_WriteChannel(DIO_ChannelC4,STD_Low);
	DIO_WriteChannel(DIO_ChannelC6,STD_Low);
		DIO_WriteChannel(DIO_ChannelD7,STD_Low);
		DIO_WriteChannel(DIO_ChannelD6,STD_Low);
		DIO_WriteChannel(DIO_ChannelC1,STD_Low);
		DIO_WriteChannel(DIO_ChannelC0,STD_Low);
}

void left(void){
		DIO_WriteChannel(EN1,STD_High);
		DIO_WriteChannel(EN2,STD_High);
		DIO_WriteChannel(DIO_ChannelC3,STD_High);
		DIO_WriteChannel(DIO_ChannelC5,STD_High);
		DIO_WriteChannel(DIO_ChannelC4,STD_Low);
		DIO_WriteChannel(DIO_ChannelC6,STD_Low);
		DIO_WriteChannel(EN1_1,STD_High);
		DIO_WriteChannel(EN2_2,STD_High);
		DIO_WriteChannel(DIO_ChannelD7,STD_High);
		DIO_WriteChannel(DIO_ChannelD6,STD_Low);
		DIO_WriteChannel(DIO_ChannelC1,STD_High);
		DIO_WriteChannel(DIO_ChannelC0,STD_Low);
		_delay_ms(770);
		stop();
}

void right(void){
		DIO_WriteChannel(EN1,STD_High);
		DIO_WriteChannel(EN2,STD_High);
		DIO_WriteChannel(DIO_ChannelC3,STD_Low);
		DIO_WriteChannel(DIO_ChannelC5,STD_Low);
		DIO_WriteChannel(DIO_ChannelC4,STD_High);
		DIO_WriteChannel(DIO_ChannelC6,STD_High);
		DIO_WriteChannel(EN1_1,STD_High);
		DIO_WriteChannel(EN2_2,STD_High);
		DIO_WriteChannel(DIO_ChannelD7,STD_Low);
		DIO_WriteChannel(DIO_ChannelD6,STD_High);
		DIO_WriteChannel(DIO_ChannelC1,STD_Low);
		DIO_WriteChannel(DIO_ChannelC0,STD_High);
		_delay_ms(770);
		stop();
}




void turn(void){
	DIO_WriteChannel(EN1,STD_High);
	DIO_WriteChannel(EN2,STD_High);
	DIO_WriteChannel(DIO_ChannelC3,STD_High);
	DIO_WriteChannel(DIO_ChannelC5,STD_Low);
	DIO_WriteChannel(DIO_ChannelC4,STD_Low);
	DIO_WriteChannel(DIO_ChannelC6,STD_High);
	_delay_ms(2250);
	stop();
	
}