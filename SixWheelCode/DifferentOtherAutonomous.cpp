#include "Spike.h"

/*
 * Another version of the autonomous code
 * Much prettier
 * Hopefully it works too
 */



//#define _AUTONOMOUS
//#define _AUTO_DRIVE
//#define _DISTANCE_SENSOR
 /*
void Spike::AutonomousInit() {
#ifdef _AUTONOMOUS
	MiniGo->Set(0.0);//servo all the way in
	l_count=999999;
	r_count=999999;
	autoState=STRAIGHT;
	timer=0;
	arm_up=false;
	ClawClose();
	seen_left=false;
	seen_right=false;
	auto_middle=!AutoSwitch1->Get();
#endif  
	
} */

//void Spike::AutonomousPeriodic() {
/*#ifdef _AUTONOMOUS
	TurnDirection BOTH_DIRECTION;
	if(!AutoSwitch1->Get()) BOTH_DIRECTION = HARD_LEFT;
	else if(!AutoSwitch3->Get()) BOTH_DIRECTION = HARD_RIGHT;
	else BOTH_DIRECTION = LEFT;
	
	if(!was_autonomous) AutonomousInit();
	was_autonomous=true;
	
	GetWatchdog().Feed();
	sendIOPortData();
	
	//Raise column and arm, but not until the claw is open
	++timer;
	if(!auto_middle){
		ColumnUp();
		if(ArmSwitchUpper->Get() && !(autoState==STOP)) ArmMotor->SetRaw(127-38);
		else if (autoState==STOP) ArmMotor->SetRaw(127-20);
		else ArmMotor->SetRaw(127);
		
	}
	else {
		ColumnUp();
		if(ArmSwitchUpper->Get() && !(autoState==STOP)) ArmMotor->SetRaw(127-34);
		else if (autoState==STOP) ArmMotor->SetRaw(127-20);
		else ArmMotor->SetRaw(127);
	}
	//if(!ArmSwitchUpper->Get()) arm_up=true;
	if(timer>=160) arm_up=true;
	
	//Stop and hang if the robot is close to the wall (make sure it's not the arm triggering it)
	float distance_feet = (frontDistance->GetVoltage())
	1024/5/2.54/12
	;
#ifdef _DISTANCE_SENSOR
	if(arm_up && (distance_feet<.65) && (autoState!=STOP)){
		autoState=STOP;
		stop_time=timer;
	}
#endif
	
	if(autoState != STOP) {
		if(!lFloorSwitch->Get()) {
			if(r_count<3 && AutoSwitch2->Get()) autoState=BOTH_DIRECTION;
			else autoState=LEFT;
			l_count=0;
			seen_left=true;
		}
		else l_count++;
		
		if(!rFloorSwitch->Get()){
			if(l_count<3 && AutoSwitch2->Get()) autoState=BOTH_DIRECTION;
			else autoState=RIGHT;
			r_count=0;
			seen_right=true;
		}
		else r_count++;
	}
	
	switch(autoState)
	{
#ifdef _AUTO_DRIVE
	case HARD_LEFT:
		Drive->TankDrive(-0.5,0.7);
		break;
	case LEFT:
		Drive->ArcadeDrive(-0.7,-.55);
		break;
	case STRAIGHT:
		Drive->ArcadeDrive(-0.7,0.0);
		break;
	case RIGHT:
		Drive->ArcadeDrive(-0.7,.55);
		break;
	case HARD_RIGHT:
		Drive->TankDrive(0.75,-0.7);
		break;
#endif
	case STOP:
		//if(timer-stop_time < 40) {
		//	Drive->ArcadeDrive(0.0,0.0);
		//}
		else if(timer-stop_time < 80)*/ /*ClawOpen();
#ifdef _AUTO_DRIVE
		if(timer-stop_time<120 && timer-stop_time>40) Drive->ArcadeDrive(0.55,0.0);
#endif
		break;
	default:
		Drive->Drive(0.0,0.0);
	}
#endif
}

void Spike::AutonomousContinuous() {
	
} */
