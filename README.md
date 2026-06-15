# Sensor-NTC-LDR

\-Temperature and light sensor with Arduino-

# 

# Temperature \& Light Monitor



An Arduino Uno project that reads ambient temperature with an NTC thermistor

and light levels with an LDR, lighting an LED when a brightness threshold is reached.



\## Hardware



\- Arduino Uno

\- NTC thermistor (10kΩ) + 10kΩ resistor

\- LDR + 10kΩ resistor

\- LED + 220Ω resistor



\## Wiring



| Component   | Pin |

|-------------|-----|

| NTC divider | A0  |

| LDR divider | A1  |

| LED         | 8   |



Both sensors use a voltage divider: 5V → sensor → (analog pin) → resistor → GND.



\## How it works



The NTC's resistance changes with temperature; the code converts the analog

reading to Celsius using the Beta equation. The LDR's resistance changes with

light; when the reading passes the threshold, the LED turns on.



\## Author



Henrique Souza

