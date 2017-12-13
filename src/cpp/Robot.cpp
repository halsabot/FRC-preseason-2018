#include "WPILib.h"
#include "MyHeader.h"

using namespace frc;

// From MyHeader.h
int add(int a, int b) {
    return a + b;
}

class Robot: public IterativeRobot {
public:
    Robot() { }

    void RobotInit() {

  	RobotDrive *myDrive;
  	Joystick *driveStick;
    }

    void DisabledInit() { }
    void AutonomousInit() { }
    void TeleopInit() {
    myDrive = new RobotDrive(1,2,3,4);
		driveStick = new Joystick(1);
    }
    void TestInit() { }

    void DisabledPeriodic() { }
    void AutonomousPeriodic() { }
    void TeleopPeriodic() {
    myDrive->ArcadeDrive(driveStick);
  }
    void TestPeriodic() { }
};

START_ROBOT_CLASS(Robot)
