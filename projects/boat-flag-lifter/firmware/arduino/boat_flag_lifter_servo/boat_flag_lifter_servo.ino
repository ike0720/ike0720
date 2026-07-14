#include <Servo.h>

// Tune these after the linkage is installed. Start conservative so the servo
// does not drive hard into the printed 90 degree stop.
const int SERVO_PIN = 9;
const int BUTTON_PIN = 2;

const int LOWERED_ANGLE = 20;
const int RAISED_ANGLE = 90;
const int STEP_DELAY_MS = 20;

Servo flagServo;

int currentAngle = LOWERED_ANGLE;
bool raised = false;
bool lastButtonState = HIGH;

void moveServoSmoothly(int targetAngle) {
  if (targetAngle == currentAngle) {
    return;
  }

  int direction = targetAngle > currentAngle ? 1 : -1;

  while (currentAngle != targetAngle) {
    currentAngle += direction;
    flagServo.write(currentAngle);
    delay(STEP_DELAY_MS);
  }
}

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  flagServo.attach(SERVO_PIN);
  flagServo.write(currentAngle);
}

void loop() {
  bool buttonState = digitalRead(BUTTON_PIN);

  if (lastButtonState == HIGH && buttonState == LOW) {
    raised = !raised;
    moveServoSmoothly(raised ? RAISED_ANGLE : LOWERED_ANGLE);
    delay(250);
  }

  lastButtonState = buttonState;
}
