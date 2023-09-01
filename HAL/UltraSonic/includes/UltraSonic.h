/*
 * UltraSonic.h
 *
 * Created: 31/8/2023 7:59:40 PM
 *  Author: youssif
 */ 


#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_
#include "DIO.h"
#include "EINT.h"
#include "UltraSonic_Config.h"
#include "TIMR0.h"
#include "DC_MOTOR.h"
#include "servo.h"

typedef double uint64;
extern volatile Uint16 Timer_Overflow;
extern volatile uint64 distance;
extern Uint8 interrupt;
extern Uint8 sensor_in_work;
void  Measure_Distance (DIO_ChannelTypes trig_ChannelID  );
void ultrasonic_init(void);
double get_distance(DIO_ChannelTypes trig_ChannelID);
void compare_distance(uint64 left1 , uint64 right1);

#endif /* ULTRASONIC_H_ */