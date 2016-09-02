/*************************************************************************
VEX - Moving Forward

Description: This program instructs your robot to move forward at full
power for three seconds. There is a two second pause at the beginning
of the program.

Configuration: This program is written to work with the Squarebot model.
	Right Motor - port2
	Left	Motor - port3

Additional Notes:
-	The "bMotorReflected[port2] = 1;" is needed with the Squarebot model,
	but may not be needed for all robot configurations.
*************************************************************************/

task main()
{
	//Move forward at full power for 3 seconds
	motor[port2] = 127;		//Motor on port2 is run at full (127) power forward
	motor[port3] = 127;		//Motor on port3 is run at full (127) power forward
	wait1Msec(3000);			//Robot runs previous code for 3000 milliseconds before moving on
}
