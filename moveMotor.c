#pragma config(Motor,  port2,           servo,         tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1)
	{
		motor(servo) = 127;
		wait1Msec(1000);
		motor(servo) = -127;
	}
}
