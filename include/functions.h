#include "main.h"
#ifndef DEVICE_DEFS
#define DEVICE_DEFS

extern MotorGroup leftDrive;
extern MotorGroup rightDrive;
extern Motor intake; 
extern Motor puncher; 
extern Motor lift; 
extern Motor adjuster; 
extern ADIGyro gyro;
extern Controller master;
extern Controller partner;
extern ControllerButton puncherButton;
extern ControllerButton intakeButton; 
extern ControllerButton outtakeButton; 
extern ControllerButton adjustUp; 
extern ControllerButton adjustDown;
extern ControllerButton adjustUpPartner; 
extern ControllerButton adjustDownPartner;
extern ControllerButton liftUp;
extern ControllerButton liftDown;
extern ControllerButton liftUpPartner;
extern ControllerButton liftDownPartner; 
extern ControllerButton brake;
void shoot(); 
#endif