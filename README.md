# CRC16 Circuit

A hardware implementation of a CRC-16 circuit developed through simulation, breadboard prototyping, and custom PCB fabrication.

## Project Overview

The project implements CRC-16 logic using shift registers and XOR-based feedback. The design was first verified in simulation, then implemented on a breadboard, and finally transferred to a custom PCB.

## Design

### EasyEDA Schematic

![CRC16 Schematic](images/CRC16_Schematic.png)

### Logic Overview

The CRC-16 circuit uses four SN74LS194 shift registers to store and move a total of 16 bits. XOR gates provide the feedback logic used to generate the CRC result, while the SN74LS04 inverter is used in the reset circuit.

The Arduino Nano provides both the 5 V power supply and the clock signal. Each clock cycle moves the data through the shift registers, so the user must time the input properly with the clock. [View the Arduino clock source](arduino/Clock.ino)

LEDs connected to the outputs show the current 16-bit state of the circuit in real time.

### Logisim Circuit

![CRC16 Logisim Circuit](images/CRC16_Simulation_Circuit_Logism.png)

The Logisim source file is available here:

[Open the Logisim simulation file](simulation/CRC16_Simulation_Logism.circ)

## Breadboard Prototype

![CRC16 Breadboard](images/CRC16_Breadboard.jpg)

## PCB Implementation

<p align="center">
  <img src="images/CRC16_PCB_FrontView.jpg" width="48%">
  <img src="images/CRC16_PCB_BackView.jpg" width="48%">
</p>

## Output Validation

The project was validated using three test cases across simulation, breadboard, and PCB implementations.

### Output 1

**Simulation**

![Output 1 Simulation](outputs/Output_1_Simulation.png)

**Breadboard Demo**

[Watch Output 1 Breadboard Demo](https://drive.google.com/file/d/1XpwJHklWsaaVDk4FPOY2Yh0EDlqXDVBN/view?usp=sharing)

**PCB Demo**

[Watch Output 1 PCB Demo](https://drive.google.com/file/d/1uItI6v-fr6tdMfrJ4lkqFr2EelPsx-tr/view?usp=sharing)

---

### Output 2

**Simulation**

![Output 2 Simulation](outputs/Output_2_Simulation.png)

**Breadboard Demo**

[Watch Output 2 Breadboard Demo](https://drive.google.com/file/d/1a-xOjlHnDgzhz3IAeYZgtOndhfysEaHk/view?usp=sharing)

**PCB Demo**

[Watch Output 2 PCB Demo](https://drive.google.com/file/d/1yQxbm3NHIUGogcneIDDjygoqKnRGvg1w/view?usp=sharing)

---

### Output 3

**Simulation**

![Output 3 Simulation](outputs/Output_3_Simulation.png)

**Breadboard Demo**

[Watch Output 3 Breadboard Demo](https://drive.google.com/file/d/1Tnp4OmnF4pjftiJ8B19GDywh05TSKt0m/view?usp=sharing)

**PCB Demo**

[Watch Output 3 PCB Demo](https://drive.google.com/file/d/1Hzwd3I4S90Bb3oA-rxGjQUXEk-qXFDB8/view?usp=sharing)

## Tools and Components

- Logisim
- EasyEDA STD
- Arduino Nano
- SN74LS194 shift registers
- SN74LS86 XOR gate
- SN74LS04 inverter
- Breadboard prototyping
- Custom PCB fabrication
- 3D-printed enclosure

## Status

Completed and validated through simulation, breadboard testing, and PCB implementation.
