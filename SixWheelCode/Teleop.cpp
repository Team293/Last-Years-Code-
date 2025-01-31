#include "Spike.h"
#include"math.h"




/**
 * Teleop Code
 * Checking if this works
 * LOLOLOLOLOLOLOL
 */
void Spike::TeleopInit(void)
{
	GetWatchdog().SetEnabled(false);
	slow_down = false;
	trigger_click = false;
	MiniGo->Set(0.0);//servo all the way in
	ColumnUp();
}

void Spike::TeleopPeriodic(void)
{	
	was_autonomous=false;
	GetWatchdog().Feed();
	sendIOPortData();
	//static int motor_count=999;
	if(driveJoy->GetTrigger() && !trigger_click){
		trigger_click = true;
		if(!slow_down)slow_down=true;
		else if(slow_down)slow_down=false;
	}
	//Drive
	float l_axis_x = tankJoy->GetRawAxis(1);
	float l_axis_y = tankJoy->GetRawAxis(2);
	float r_axis_x = driveJoy->GetRawAxis(1);
	float r_axis_y = driveJoy->GetRawAxis(2);
		//Allow for angles while taking +,- into account
	float l_tank = sqrt(pow(l_axis_y,2)+pow(l_axis_x,2))*fabs(l_axis_y)/l_axis_y;
	float r_tank = (sqrt(pow(r_axis_y,2)+pow(r_axis_x,2))*fabs(r_axis_y)/r_axis_y);
	
	if(slow_down==true){
		l_tank = l_tank * 0.75;
		r_tank = r_tank * 0.75;
	}
	
	//Drive->TankDrive(l_tank,r_tank*0.75);
	Drive->TankDrive(l_tank,r_tank);

	if(opJoy->GetRawButton(5)) ColumnUp();
	else if (opJoy->GetRawButton(7)) ColumnDown();
	
	if(opJoy->GetRawButton(6)) ClawClose();
	else if (opJoy->GetRawButton(8)) ClawOpen();
	
//	if (ArmSwitchUpper->Get())ArmMotor->SetRaw(127-10);
	
	//move the arm up/down
	//But not past the limit switches
	
	float arm_mag = opJoy->GetRawAxis(4)*64;
	if(!ArmSwitchUpper->Get() && arm_mag < 0) ArmMotor->SetRaw(127);
	else if(!ArmSwitchLower->Get() && arm_mag > 0) ArmMotor->SetRaw(127);
	else ArmMotor->SetRaw(127+(int)arm_mag);
	
	//Minibot realse
	//if(Joystick1->GetRawButton(9))MiniGo->Set(0.0);//servo all the way in
	if(opJoy->GetRawButton(4))MiniGo->Set(0.95);//servo all the way out
	if(opJoy->GetRawButton(10))MiniGo->Set(0.28);//servo in between (not halfway)
	
	if(!driveJoy->GetTrigger())trigger_click=false;
}



void Spike::TeleopContinuous(void)
{
}
