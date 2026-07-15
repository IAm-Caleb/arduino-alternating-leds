# Arduino Alternating LED Blinker

## Project Overview

This is my first Arduino project.

The project uses an Arduino Uno to control two LEDs. The red LED blinks three times, followed by the yellow LED blinking three times. The sequence then repeats continuously.

Before building the physical circuit, I designed and tested it using Tinkercad. This helped me confirm the circuit connections, resistor placement, Arduino pin assignments, and program behaviour.

## Physical Project

### Circuit Overview

The image below shows the physical circuit assembled using an Arduino Uno and a breadboard.

![Physical circuit overview](images/circuit-overview.jpg)

### LEDs Blinking

The image below shows the completed LED blinking project.

![LEDs blinking](images/leds-blinking.jpg)

## Tinkercad Simulation

Before assembling the physical circuit, I created and tested a simulation in Tinkercad.

### Digital Circuit Overview

![Digital circuit overview](simulation/digital-circuit-overview.png)

## Simulation Files

The files exported from the Tinkercad simulation are available below:

* [Component list](simulation/components_list.csv)
* [Circuit schematic](simulation/schematic.pdf)
* [Digital circuit overview](simulation/digital-circuit-overview.png)
* [Electrical circuit board file](simulation/electrical-circuit-file.brd)

## Components Used

* Arduino Uno
* Breadboard
* Red LED
* Yellow LED
* 330 Ω current-limiting resistors
* Jumper wires
* USB cable

The complete component list exported from Tinkercad is available in [`components_list.csv`](simulation/components_list.csv).

## Circuit Connections

| Component              | Connection                        |
| ---------------------- | --------------------------------- |
| Red LED                | Arduino digital pin 9             |
| Yellow LED             | Arduino digital pin 10            |
| LED ground connections | Arduino GND                       |
| Resistors              | Connected in series with the LEDs |

The resistors limit the current flowing through the LEDs. This helps protect both the LEDs and the Arduino output pins from excessive current.

## How the Program Works

The Arduino program contains two main functions: `setup()` and `loop()`.

### `setup()`

The `setup()` function runs once when the Arduino is powered on or reset.

It configures digital pins 9 and 10 as output pins:

```cpp
pinMode(LedPinRed, OUTPUT);
pinMode(LedPinYellow, OUTPUT);
```

### `loop()`

The `loop()` function runs repeatedly after `setup()` finishes.

The program uses two `for` loops:

1. The first loop makes the red LED blink three times.
2. The second loop makes the yellow LED blink three times.
3. After both loops finish, the complete sequence begins again.

The `digitalWrite()` function controls the state of each Arduino output pin:

* `HIGH` turns the connected LED on.
* `LOW` turns the connected LED off.

The `delay()` function controls how long each LED remains on or off. In this project, each delay is 250 milliseconds.

## Program Sequence

```text
Red LED turns on
Red LED turns off
Repeat three times

Yellow LED turns on
Yellow LED turns off
Repeat three times

Restart the complete sequence
```

## Source Code

The complete Arduino program is available here:

[`arduino-alternating-leds.ino`](arduino-alternating-leds.ino)

## What I Learned

Through this project, I learned:

* how to design and test a circuit using Tinkercad;
* how to assemble a basic Arduino circuit on a breadboard;
* how to connect LEDs to an Arduino Uno;
* why LEDs require current-limiting resistors;
* how to configure Arduino digital pins as outputs;
* how to use `digitalWrite()` to control LEDs;
* how to use `delay()` to control timing;
* how to use `for` loops to repeat instructions;
* how the Arduino `setup()` and `loop()` functions work;
* how to export simulation files from Tinkercad;
* how to document an Arduino project on GitHub.

## Possible Future Improvements

Future versions of this project could:

* allow the blinking speed to be changed;
* use a push button to start or stop the LEDs;
* add more LEDs and blinking patterns;
* use functions to reduce repeated code;
* use `millis()` instead of `delay()`;
* allow the LEDs to blink independently;
* use a potentiometer to control the blinking speed.

## Repository Structure

```text
arduino-alternating-leds/
├── README.md
├── arduino-alternating-leds.ino
├── images/
│   ├── circuit-overview.jpg
│   └── leds-blinking.jpg
└── simulation/
    ├── components_list.csv
    ├── schematic.pdf
    ├── digital-circuit-overview.png
    └── electrical-circuit-file.brd
```
