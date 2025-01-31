#include "Spike.h"


	Spike::Spike(void)
	{ 
		was_autonomous=false;
		GetWatchdog().SetExpiration(10.0);//set up watchdog
		GetWatchdog().SetEnabled(true);
		
		Drive = new RobotDrive(L_DRIVE_PWM, R_DRIVE_PWM);
		driveJoy = new Joystick(1);
		opJoy = new Joystick(2);
		tankJoy = new Joystick(3);
		MiniGo = new Servo(MINIBOT_RELEASE_PWM);
		
		//distance sensor
		frontDistance = new AnalogChannel(DISTANCE_FRONT_ANA);
		
		ColUpSol = new Solenoid(COL_UP_SOL);
		ColDnSol = new Solenoid(COL_DN_SOL);
		GrprOpnSol = new Solenoid(GRPR_OPN_SOL);
		GrprClsSol = new Solenoid(GRPR_CLS_SOL);
		
		//Make sure these are set to up for col and close for grip BEFORE starting the compressor
		ColUpSol->Set(false);
		ColDnSol->Set(true);
		GrprOpnSol->Set(false);
		GrprClsSol->Set(true);
		
		comp = new Compressor(COMPRESSOR_LIMIT_DIO,COMPRESSOR_RELAY);
		comp->Start();
		
		
		ArmSwitchUpper = new DigitalInput(ARM_SWITCH_UPPER_DIO);
		ArmSwitchLower = new DigitalInput(ARM_SWITCH_LOWER_DIO);
		ArmMotor = new PWM(ARM_MOTOR_PWM);
		
		lFloorSwitch = new DigitalInput(LFLOORSWITCH_DIO);
		rFloorSwitch = new DigitalInput(RFLOORSWITCH_DIO);
		AutoSwitch1 = new DigitalInput(AUTO_SWITCH1_DIO);
		AutoSwitch2 = new DigitalInput(AUTO_SWITCH2_DIO);
		AutoSwitch3 = new DigitalInput(AUTO_SWITCH3_DIO);
		AutoSwitch4 = new DigitalInput(AUTO_SWITCH4_DIO);
		//mFloorSwitch = new DigitalInput(MFLOORSWITCH_DIO); not used anymore
		
	}
	
	Spike::~Spike()
	{
		delete Drive;
		delete comp;
		delete driveJoy;
		delete tankJoy;
		delete opJoy;
		delete ArmSwitchUpper;
		delete ArmSwitchLower;
		delete ArmMotor;
		delete AutoSwitch1;
		delete AutoSwitch2;
		delete AutoSwitch3;
		delete AutoSwitch4;
		delete lFloorSwitch;
		delete rFloorSwitch;
		delete ColUpSol;
		delete ColDnSol;
		delete GrprOpnSol;
		delete GrprClsSol;
		delete frontDistance; 
		delete MiniGo;
	}

START_ROBOT_CLASS(Spike);
