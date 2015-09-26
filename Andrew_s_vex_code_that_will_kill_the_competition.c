
task main()
{
	get_controls();
	motorz();
}

void get_controls() {
	if (vexRT[Btn6D] == 1) {
		bool clawclose = true;
		} else {
		bool clawclose = false;
	}
	if (vexRT[Btn6U] == 1) {
		bool clawopen = true;
		} else {
		bool clawopen = false;
	}
}

void motorz() {
	if (clawopen == true) {
		motor[port4]=127;
		motor[port7]=127;
		} else if (clawclose == true) {
		motor[port4]=-127;
		motor[port7]=-127;
	}
}
