# Blindspot Monitoring System

This project involves the development of a Blindspot Monitoring System (BMS) using Arduino, ultrasonic sensors, and C programming. The system is designed to detect vehicles and other hazards in the blind spots of a car, providing real-time alerts to the driver. The simulation of the system was conducted using Tinkercad, and it was tested under various conditions with excellent results.

## Features

- **Real-time Blindspot Detection:** Uses ultrasonic sensors to monitor the blind spots of a vehicle and detect hazards.
- **C Language Implementation:** The system is programmed using C, providing efficient and fast processing.
- **Simulation on Tinkercad:** The design and functionality of the system were validated through simulations on Tinkercad before hardware implementation.
- **High Accuracy:** Achieved 87% accuracy in static, overtaking, and positioning tests with zero false signal occurrences.

## Components Used

- Arduino Board
- Ultrasonic Sensors
- LEDs
- Breadboard and Jumpers
- Battery
- Switch
- Resistors

## How It Works

1. **Sensing:** The system uses ultrasonic sensors to detect objects within the blind spot zones of a vehicle.
2. **Processing:** The data from the sensors are processed by the Arduino, which is programmed in C.
3. **Alerting:** If a hazard is detected, the system triggers LEDs to alert the driver.
4. **Simulation:** The entire system was simulated on Tinkercad to ensure functionality before hardware implementation.

## Testing

The system was rigorously tested under the following conditions:

- **Static Test:** Verified the ability to differentiate between static objects (e.g., buildings) and moving hazards.
- **Overtake Test:** Ensured reliable detection of vehicles approaching from the rear on multi-lane roads.
- **Position Test:** Confirmed the system’s accuracy in identifying vehicles in various blind spot positions.

All tests were passed successfully, with the system showing no false signals or errors.

## Setup and Installation

1. **Hardware Setup:**
   - Assemble the components as per the circuit diagram provided.
   - Connect the ultrasonic sensors to the Arduino board.

2. **Software Setup:**
   - Upload the C code to the Arduino using the Arduino IDE.
   - Run the simulation on Tinkercad to verify the setup.

3. **Run the System:**
   - Power on the system and monitor the LEDs for blind spot alerts.

## Conclusion

This Blindspot Monitoring System provides a cost-effective and reliable solution for enhancing vehicle safety by eliminating blind spots. Future improvements could include using higher quality sensors and integrating the system with vehicle onboard diagnostics.
