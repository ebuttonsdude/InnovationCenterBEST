#pragma config(Motor,  port4,           grab,          tmotorServoStandard, openLoop)
#pragma config(Motor,  port7,           rotate,        tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

bool clawclose=false;
bool clawopen=false;

void get_controls()
{
	if (vexRT[Btn6D] == 1) {
		clawclose = true;
		} else {
		clawclose = false;
	}
	if (vexRT[Btn6U] == 1) {
		clawopen = true;
		} else {
		clawopen = false;
	}
	if (clawopen == true) {
		motor[grab]=127;
		} else if (clawclose == true) {
		motor[grab]=-127;
	} else {
		motor[grab]=0;
	}
}

task main()
{
	do {
	get_controls();
}
	while(1);
}
