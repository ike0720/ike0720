# Smart Interactive Cornhole Boards

## Overview
This project is a custom-built set of cornhole boards designed to provide real-time gameplay feedback using integrated sensors, LED lighting, and embedded control systems.

The goal was to combine traditional woodworking with electronics and embedded systems to create a more interactive and engaging gameplay experience.

---

## Features
- Break-beam sensor for accurate scoring detection
- Vibration sensor for detecting board impacts
- WS2815 LED strips for visual feedback and animations
- ESP32 microcontroller for control logic
- Multiple lighting modes and animations
- Real-time event response (score detection overrides all other effects)

---

## System Architecture

### Hardware Components
- ESP32 DevKit microcontroller
- WS2815 12V addressable LED strips (dual signal)
- Break-beam sensor (normally closed)
- Vibration sensor module (adjustable sensitivity)
- 12V power system with voltage regulation
- Custom wiring harness with soldered data lines

### Electrical Design
- Dedicated power injection to prevent voltage drop across LEDs
- Separate signal and power routing to reduce noise
- Use of dual data lines (DI/BI) for LED redundancy
- Sensor inputs configured with digital I/O for fast response

---

## Software & Control Logic

### Key Behaviors
- Break-beam detection (score) overrides all other effects
- Vibration triggers a temporary flash effect
- Default lighting mode returns after event completion

### Libraries Used
- FastLED (final implementation)
- Arduino framework for ESP32

### Challenges Solved
- Correcting LED color order and timing issues
- Stabilizing vibration sensor readings (false triggers)
- Managing priority between multiple sensor inputs
- Ensuring consistent LED brightness with long strips

---

## Build Process

### Mechanical
- Constructed regulation-size cornhole boards
- Integrated internal space for electronics and wiring
- Designed layout to protect components from vibration and impact

### Electrical
- Soldered all LED data connections for reliability
- Used WAGO connectors for power distribution
- Designed wiring paths to minimize interference

### Integration
- Combined woodworking, electronics, and embedded code into a single system
- Iteratively tested and refined sensor placement and sensitivity

---

## Challenges

- Vibration sensor initially triggered constantly → resolved through sensitivity tuning
- LED strips required power injection to maintain consistent brightness
- Sensor priority conflicts required custom logic handling
- Early microcontroller issues required hardware replacement and debugging

---

## Results
The system successfully:
- Detects scoring events in real time
- Provides clear and responsive visual feedback
- Maintains stable performance during gameplay
- Demonstrates reliable integration of hardware and software systems

---

## Skills Demonstrated
- Embedded systems (ESP32)
- Sensor integration and calibration
- LED control and power management
- Electrical wiring and soldering
- Troubleshooting and debugging
- Mechanical design and woodworking
- System integration

---

## Future Improvements
- Wireless connectivity for score tracking
- Mobile app integration
- Sound effects and audio feedback
- Improved enclosure for electronics
- Expanded lighting effects and animations

---

## Media
(Add images and videos here)
