#ifndef SMART_CAN_JAGUAR_H
#define SMART_CAN_JAGUAR_H
#include "WPILib.h"
#include "Stallable.h"
class SmartCANJaguar : public CANJaguar, Stallable{
public:
	SmartCANJaguar(UINT8 deviceNumber);
	void Invert();
	bool IsInverted();
	void Set(float value);
	void ConfigureSpeedMode();
	void ConfigureVoltageMode();
private:
	bool isInverted;
protected:
	float GetVoltageSource();
};
#endif