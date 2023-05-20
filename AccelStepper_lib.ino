#include <AccelStepper.h>
#define motorInterfaceType 4

AccelStepper stepper = AccelStepper(motorInterfaceType, 9, 8); // creating a new instance of the AccelStepper class:

void setup() {
  stepper.setMaxSpeed(1000); // Set the maximum speed in steps per second:
  stepper.setAcceleration(500);
}

void loop() {
  stepper.moveTo(8000);
  stepper.runToPosition();
  delay(50);
  stepper.moveTo(0); // Move back to zero:
  stepper.runToPosition();
  delay(50);
}
