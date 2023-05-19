# Arduino Traffic Light
This code snippet demonstrates a simple Arduino traffic light simulation. It defines the pin assignments for the traffic lights and pedestrian crossing, and implements a basic traffic light sequence. The code also includes a button input to trigger a change in the traffic light sequence.

## Description
The Arduino Traffic Light project utilizes the Arduino framework to control the behavior of the traffic lights. It defines the pins for the LEDs representing the red, yellow, and green lights for both the main traffic lights and the pedestrian crossing. The setup function sets the pin modes for the LEDs and initializes the serial communication. The loop function calls the zmiana1 function to execute the traffic light sequence. The przycisk function checks the state of a button and triggers a change in the traffic light sequence accordingly. The zmiana1 function implements the traffic light sequence by controlling the LEDs based on predefined timing delays.

## Usage
To use this code snippet, follow these steps:

1. Set up your Arduino board and connect the LEDs for the traffic lights and pedestrian crossing to the corresponding pins defined in the code.
2. Copy the code into your Arduino IDE or preferred code editor.
3. Upload the code to your Arduino board.
4. Observe the traffic light sequence and test the button functionality to trigger a change in the sequence.

## Dependencies
This code snippet require Arduino.h library to work.

## Contact
If you have any questions or feedback, please feel free to reach out to me at kuna.patryk@gmail.com or visit my portfolio site at [patrykkuna.com](https://patrykkuna.com)
