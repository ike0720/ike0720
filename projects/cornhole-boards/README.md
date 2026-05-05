<p>
  <img src="IMG_2804_LINK_HERE" width="300" align="right" style="margin-left: 15px;">
</p>


<img width="967" height="1311" alt="IMG_2805" src="https://github.com/user-attachments/assets/b2b4bb0e-b14c-4090-a07b-e733ea934eaa" />
<img width="1174" height="1734" alt="IMG_2804" src="https://github.com/user-attachments/assets/66925e20-4bcd-4adb-9aaf-dbf7bee2ee47" />
<img width="3024" height="4032" alt="ArchStencil" src="https://github.com/user-attachments/assets/fe7a2998-3274-4e85-baa1-41164cf105d1" />
<img width="4344" height="5792" alt="IMG_2947" src="https://github.com/user-attachments/assets/2a468f7f-81b1-4cb4-9f2f-6b5898ea78ab" />
<img width="4284" height="5712" alt="ChannelAndHole" src="https://github.com/user-attachments/assets/c55f95a3-1b2f-42f3-afb8-67f9f223382e" />
<img width="4284" height="5712" alt="NoHoleNoChannel" src="https://github.com/user-attachments/assets/8e0d8475-e4b1-4322-881e-b50d1fbcd482" />
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
