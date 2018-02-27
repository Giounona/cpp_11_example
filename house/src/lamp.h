/*
 * lamp.h
 *
 *  Created on: 26 Feb 2018
 *      Author: feabhas
 */

#ifndef LAMP_H_
#define LAMP_H_

enum class HouseCode: unsigned char{

	A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P

};

using DeviceCode = std::pair <HouseCode, int>;
struct Lamp{
	DeviceCode device;
	bool state;

};

void Lamp_on(Lamp& lamp);
void Lamp_off(Lamp& lamp);
Lamp Make_lamp(void);
void PrintLamp(const Lamp& lamp);

#endif /* LAMP_H_ */