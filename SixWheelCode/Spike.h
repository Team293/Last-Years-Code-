#include "WPILib.h"
#include "Globals.h"

class Spike : public IterativeRobot {

	RobotDrive * Drive;
	Joystick * driveJoy;
	Joystick * opJoy;
	Joystick * tankJoy;
	Servo * MiniGo;
	
	//Analog input for distance sensor
	AnalogChannel * frontDistance;
	
	//Solenoid Outputs
	Solenoid * ColUpSol;
	Solenoid * ColDnSol;
	Solenoid * GrprOpnSol;
	Solenoid * GrprClsSol;
	
	Compressor * comp;
	
	/*Limit switches*/
	DigitalInput * ArmSwitchUpper;
	DigitalInput * ArmSwitchLower;
	PWM * ArmMotor;
	
	DigitalInput * lFloorSwitch;
	DigitalInput * rFloorSwitch;
	DigitalInput * AutoSwitch1;
	DigitalInput * AutoSwitch2;
	DigitalInput * AutoSwitch3;
	DigitalInput * AutoSwitch4;
	//DigitalInput * mFloorSwitch; not used anymore
	
	//flags for line-tracking
	//Direction last_floorswitch;
	//bool left_floorswitch;
	//bool rght_floorswitch;
	//bool seen_both;
	int l_count;
	int r_count;
	//int wait_count;
	
	bool seen_left;
	bool seen_right;
	
	TurnDirection autoState;
	bool arm_up;
	long stop_time;
	bool was_autonomous;
	long timer;
	bool auto_middle;
	
	//flags
	bool col_up;
	bool claw_open;
	bool Robot_Win;
	bool trigger_click;
	bool slow_down;
public:
	Spike();
	~Spike();	
	
	void AutonomousInit();//auto code in Autonomous.cpp
	void AutonomousContinuous();
	void AutonomousPeriodic();
	
	void TeleopInit();//teleop code in Teleop.cpp
	void TeleopContinuous();
	void TeleopPeriodic();
	
	void DisabledInit();
	void DisabledContinuous();
	void DisabledPeriodic();
	
	void sendIOPortData();
	//void sendVisionData(void);
	
	//Pneumatics code in pneumatics.cpp
	void ColumnUp();
	void ColumnDown();
	void ClawOpen();
	void ClawClose();
};
