bool clawclose=false;
bool clawopen=false;
// need to return functions!!!!
void get_controls()
{
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
	if (vexRT[Btn6U] == 1) {
		motor[port4]=127;
		motor[port7]=127;
		} else if (vexRT[Btn6D] == 1) {
		motor[port4]=-127;
		motor[port7]=-127;
	} else {
		motor[port4]=0;
		motor[port7]=0;
	}
}

task main()
{
	get_controls();
}
