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
		motor[port4]=127;
		motor[port7]=127;
		} else if (clawclose == true) {
		motor[port4]=-127;
		motor[port7]=-127;
	} else {
		motor[port4]=0;
		motor[port7]=0;
	}
}

task main()
{
	do {
	get_controls();
}
	while(1);
}
