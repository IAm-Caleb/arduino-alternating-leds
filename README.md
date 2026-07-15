# Arduino Alternating LED Blinker

## Project overview

This is my first Arduino project.

The project uses an Arduino Uno to control two LEDs. The red LED blinks three times, followed by the yellow LED blinking three times. The sequence then repeats continuously.

## Demonstration

Add a photograph or video of the completed circuit here.

```markdown
![Alternating LED circuit](images/circuit-overview.jpg)
```

## Components used

* 1 Arduino Uno
* 1 breadboard
* 1 red LED
* 1 yellow LED
* 2 × 330 Ω resistors
* Jumper wires
* USB cable

## Circuit connections

| Component              | Arduino connection                |
| ---------------------- | --------------------------------- |
| Red LED control pin    | Digital pin 9                     |
| Yellow LED control pin | Digital pin 10                    |
| Red LED cathode        | GND through the circuit           |
| Yellow LED cathode     | GND through the circuit           |
| Resistors              | Connected in series with the LEDs |

Each LED uses a current-limiting resistor to prevent excessive current from flowing through the LED and the Arduino output pin.

## How the program works

The program contains two main Arduino functions:

### `setup()`

The `setup()` function runs once when the Arduino starts. It configures digital pins 9 and 10 as output pins.

### `loop()`

The `loop()` function runs repeatedly.

Inside it:

1. A `for` loop makes the red LED blink three times.
2. Another `for` loop makes the yellow LED blink three times.
3. When both loops finish, the sequence begins again.

The `digitalWrite()` function turns each LED on or off.

The `delay()` function controls how long each LED remains on or off. In this project, each delay is 250 milliseconds.

## What I learned

Through this project, I learned:

* how to connect LEDs to an Arduino Uno;
* why LEDs require current-limiting resistors;
* how to configure digital pins as outputs;
* how to use `digitalWrite()` to control an LED;
* how to use `delay()` to control timing;
* how to use `for` loops to repeat instructions;
* how the Arduino `setup()` and `loop()` functions work.

## Possible future improvements

Future versions of this project could:

* allow the user to change the blinking speed;
* use a push button to start and stop the LEDs;
* use more LEDs;
* control the sequence without using `delay()`;
* place repeated LED instructions inside reusable functions.

## Source code

The complete Arduino source code is available in:

```text
arduino-alternating-leds.ino
```
