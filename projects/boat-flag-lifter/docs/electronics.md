# Electronics Plan

## Control Concept

The powered version will use a waterproof metal-gear servo to rotate the flag arm between a lowered position and a raised position. The servo should move slowly enough to avoid hammering the printed stop or overloading the linkage.

## Recommended Components

- Waterproof metal-gear servo, approximately 25 kg-cm to 35 kg-cm
- 5 V to 7.4 V servo power supply matched to the servo rating
- Arduino, ESP32, or similar microcontroller
- Momentary button, toggle switch, or receiver input
- Inline fuse sized for the servo circuit
- Waterproof connectors or heat-shrink protected splices

## Wiring Notes

Servo wires are typically:

- Red: positive servo power
- Brown or black: ground
- Orange, yellow, or white: signal

Important wiring rules:

- Servo power should not be pulled directly from a weak microcontroller 5 V pin.
- Servo ground and microcontroller ground must be connected together.
- Boat power should be fused.
- Any outdoor wiring should be strain-relieved and protected from water.

## Firmware Behavior

The starter firmware should:

- Store raised and lowered servo angles as constants.
- Move between positions in small steps.
- Pause briefly between steps so the motion is not violent.
- Allow easy angle tuning.
- Avoid forcing the servo past the physical 90 degree stop.

## Future Electronics Ideas

- Add a waterproof raise/lower button.
- Add a wireless remote input.
- Add a limit switch at each end of travel.
- Add a current sensor to detect binding.
- Add a manual override mode.
- Add an LED status indicator.
