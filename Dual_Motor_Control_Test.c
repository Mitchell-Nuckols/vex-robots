#pragma config(Sensor, in1, p2kill, sensorTouch)
#pragma config(Sensor, in2, p3kill, sensorTouch)
#pragma config(Motor,  port2, p2, tmotorServoStandard, openLoop)
#pragma config(Motor,  port3, p3, tmotorServoStandard, openLoop)

task main() {
	wait1Msec(100);

	while(true) {
		if(SensorValue(in1) == 1) {
			motor[port2] = 63;
			motor[port3] = 0;
		}else if(SensorValue(in2) == 1) {
			motor[port2] = 0;
			motor[port3] = 63;
		}else {
			motor[port2] = 63;
			motor[port3] = 63;
		}
	}
}
