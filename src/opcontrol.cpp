#include "main.h"
#include "functions.h"
/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	// This here automatically creates the chassis for you 
	auto drive = ChassisControllerFactory::create( leftDrive, rightDrive, AbstractMotor::gearset::green, {4_in, 14.375_in});
	lift.setBrakeMode(AbstractMotor::brakeMode::hold); 
	while (true) {
		//Tank Drive
		drive.tank(master.getAnalog(ControllerAnalog::leftY),
				   master.getAnalog(ControllerAnalog::rightY));


		if(puncherButton.isPressed()) {
			puncher.moveVelocity(-600);
		} else {
			puncher.moveVelocity(0);
		}

		if(intakeButton.isPressed()) {
			intake.moveVelocity(-400);
		} else if(outtakeButton.isPressed()) {
			intake.moveVelocity(400);
		} else { 
			intake.moveVelocity(0);
		}

		if(adjustUp.isPressed() || adjustUpPartner.isPressed() ) {
			adjuster.moveVelocity(200);
		} else if(adjustDown.isPressed() || adjustDownPartner.isPressed()) {
			adjuster.moveVelocity(-200);
		} else {
			adjuster.moveVelocity(0);
		}

		if(liftUp.isPressed() || liftUpPartner.isPressed() ) {
			lift.moveVelocity(200);
		} else if(liftDown.isPressed() || liftDownPartner.isPressed()) {
			lift.moveVelocity(-200);
		} else {
			lift.moveVelocity(0);
		}

		if(brake.isPressed()) {
			leftDrive.setBrakeMode(AbstractMotor::brakeMode::hold);
			rightDrive.setBrakeMode(AbstractMotor::brakeMode::hold);
		} else {
			leftDrive.setBrakeMode(AbstractMotor::brakeMode::coast);
			rightDrive.setBrakeMode(AbstractMotor::brakeMode::coast);
		}


		pros::delay(10);
	}
}
