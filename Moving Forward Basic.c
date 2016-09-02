#pragma config(Sensor, in1, touchSensor, sensorTouch)

// Runs the motors at half power until the button is pressed.

task main()
{
	wait1Msec(2000);
	
	while(SensorValue(in1) == 0)		//Loop while robot's bumper/touch sensor isn't pressed in
	{
		motor[port2] = 63;			//Motor on port2 is run at half (63) power forward
		motor[port3] = 63;			//Motor on port3 is run at half (63) power forward
	}
}