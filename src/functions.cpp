#include "functions.h"
MotorGroup leftDrive({3,2});
MotorGroup rightDrive({-1,-4});
Motor intake(5, false, AbstractMotor::gearset::blue);
Motor puncher(6, false, AbstractMotor::gearset::red);
Motor lift(7, false, AbstractMotor::gearset::red);
Motor adjuster(8, false, AbstractMotor::gearset::red);
ADIGyro gyro(8,1); 
Controller master; 
Controller partner(ControllerId::partner);
ControllerButton puncherButton(ControllerDigital::L2);
ControllerButton intakeButton(ControllerDigital::R1);
ControllerButton outtakeButton(ControllerDigital::R2);
ControllerButton adjustUp(ControllerDigital::B);
ControllerButton adjustUpPartner(ControllerId::partner, ControllerDigital::L1);
ControllerButton adjustDown(ControllerDigital::A);
ControllerButton adjustDownPartner(ControllerId::partner, ControllerDigital::L2);
ControllerButton liftUp(ControllerDigital::up);
ControllerButton liftUpPartner(ControllerId::partner, ControllerDigital::R1);
ControllerButton liftDown(ControllerDigital::down);
ControllerButton liftDownPartner(ControllerId::partner, ControllerDigital::R2);
ControllerButton brake(ControllerId::partner, ControllerDigital::X);

void shoot() {
    puncher.tarePosition();
    puncher.moveAbsolute(1000, -100); // Moves puncher back - modify to get right value
    
}