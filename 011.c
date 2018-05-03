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
	resetTimer(T1);
	while (time1[T1] < 30000) {
		untilBump(bump);
		turnLEDOn(LED);
		wait(2);
		startMotor(motor_left, 63);
		wait(2);
		untilBump(limit);
		stopMotor(motor_left);
		startMotor(motor_right, 63);
		untilBump(bump);
		stopMotor(motor_right);
		startMotor(motor_left, 64);
	}
	turnLEDOff(LED);
	wait(1);
	turnLEDOn(LED);
	wait(3);
}
