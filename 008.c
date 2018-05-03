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
	clearTimer(T1);
	while (time1[T1] < 20000) {
		startMotor(motor_left, 63);
		wait(2);
		stopMotor(motor_left);
		startMotor(motor_right, 63);
		wait(2);
		stopMotor(motor_right);
		turnLEDOn(LED);
		wait(3);
		turnLEDOff(LED);
	}
}
