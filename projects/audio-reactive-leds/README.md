# Audio-Reactive LED System (ESP32)

## Overview
Designed and installed a real-time audio-reactive LED system in a vehicle using an ESP32 microcontroller, microphone input, and WS2812 addressable LEDs.

The system analyzes incoming audio signals and dynamically drives LED animations based on sound intensity and frequency, creating a synchronized lighting experience.

## Features
- Real-time audio visualization
- WS2812 individually addressable LED control
- Adjustable sensitivity to different sound levels
- Multiple lighting modes and effects
- Compact embedded system design for vehicle integration

## System Design

### Hardware
- ESP32 microcontroller
- Microphone input module
- WS2812 LED strips
- 5V power supply
- Custom wiring and soldered connections

### Software
- Arduino framework
- FastLED library for LED control
- Real-time signal processing for audio input

## Functionality
- Audio signal is captured through the microphone module
- ESP32 processes signal amplitude and/or frequency
- LED patterns respond dynamically to music and ambient sound
- System maintains smooth transitions and responsive updates

## Challenges

### Noise and Signal Stability
Initial microphone input produced noisy and inconsistent readings, especially in a vehicle environment with engine and road noise.

**Solution:**
- Tuned sensitivity levels for different sound conditions
- Applied filtering to stabilize input signal
- Tested multiple configurations to balance responsiveness and noise rejection

### Power Stability and Voltage Drop
Running WS2812 LEDs over longer distances introduced voltage drop, causing dimming and inconsistent color output.

**Solution:**
- Added power injection points along the LED strip
- Used heavier gauge wiring to reduce resistance
- Used a regulated 5V supply to maintain consistent LED performance

### Electrical Shorts and Wiring Reliability
Working inside a vehicle increased the risk of shorts because of tight routing, vibration, and exposed connections.

**Solution:**
- Insulated connections with heat shrink
- Secured wiring to prevent movement and wear over time
- Tested circuits in stages to isolate and fix faults

### Tight Installation Constraints
Limited space inside the vehicle made component placement and wiring more difficult.

**Solution:**
- Kept the ESP32 and support wiring compact
- Routed wiring cleanly to avoid clutter
- Placed components where they could still be accessed for troubleshooting

### Microphone Placement
Microphone placement had a major impact on how well the LEDs reacted to music.

**Solution:**
- Tested multiple microphone locations
- Adjusted sensitivity based on placement
- Balanced direct audio pickup with ambient cabin sound

### Performance Optimization
The ESP32 had to process audio input while also keeping LED animations smooth.

**Solution:**
- Optimized code timing and update loops
- Reduced unnecessary processing
- Balanced animation complexity with responsiveness

## Results
The final system successfully:
- Reacted to music in real time
- Produced smooth and responsive LED animations
- Operated reliably in a vehicle environment
- Demonstrated stable wiring, power delivery, and signal response

## Skills Demonstrated
- Embedded systems using ESP32
- Audio signal input and filtering
- WS2812 LED control
- FastLED programming
- Electrical wiring and soldering
- Power management and voltage drop troubleshooting
- Real-world system integration

## Future Improvements
- Frequency band analysis using FFT
- Bluetooth control for mode switching
- Mobile app interface
- Improved enclosure and mounting system
