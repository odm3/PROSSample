#include "main.h"
#include "functions.h"
/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {

    // Create the chassis factory just like in opcontrol
    auto drive = ChassisControllerFactory::create( leftDrive, rightDrive, AbstractMotor::gearset::green, {4_in, 14.375_in});

    //Before we get to motion profiling, get basic steps.
    /* Example Auton
        shoot();
        drive.moveForwardAsync(1000) //Moves robot 1000 degrees forward, other commands can move at the same time
        drive.turnAngle(90); // turns 90 degrees, other commands wait until this is finished

    */

}
