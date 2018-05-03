#pragma config(Sensor, in1,    line_follower,  sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    photoresistor,  sensorReflection)
#pragma config(Sensor, dgtl1,  limit,          sensorTouch)
#pragma config(Sensor, dgtl2,  bump,           sensorTouch)
#pragma config(Sensor, dgtl3,  encoder,        sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  ultrasonic,     sensorSONAR_inch)
#pragma config(Sensor, dgtl12, LED,            sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           motor_right,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           motor_left,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servo,         tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {
	while (true) {
		if (SensorValue[photoresistor] > 500) {
			turnFlashlightOn(flashlight);
		} else {
			turnFlashlightOff(flashlight);
		}
	}
}
