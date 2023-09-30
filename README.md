

Digital Voltmeters are most common devices for Embedded and Hardware Engineers and are used on daily purpose for measuring voltage values in their circuits. here, i will we go through how to make digital voltmeter using Microchip PIC micro-controller which measure dc voltage between (0 - 100)v and then display voltage values on multiplexed seven segment display.

In this project, i use PIC 16F676 micro-cuntroller to built this circuit.

We will measure the DC voltage (0-100V) using PIC Analog to Digital Converter. One thing is important, as PIC is a 5V device and directly connecting such a high voltage (100V) on the micro-controller, will definitely damage the micro-controller. So to overcome this situation we have to scale down the Maximum Voltage value which is 100V to the Maximum Voltage value which the micro-controller can sense, in this case it is 5V.

For scaling down the voltage we will use the voltage divider circuit :
![image](https://github.com/SurajkumarsinghG/DC--voltmeter-measuring-0-----100v/assets/146471626/cedf7e53-ebae-4c20-8940-d2e786a793c0)

Now a question arises that, how i selected these values of resistor, for that see the following calculations.
![image](https://github.com/SurajkumarsinghG/DC--voltmeter-measuring-0-----100v/assets/146471626/3f78388d-c4a9-4e04-b35b-3afa9627482d)

Schemetic Diagram
![image](https://github.com/SurajkumarsinghG/DC--voltmeter-measuring-0-----100v/assets/146471626/8eb171b1-5860-4d3d-9723-76707f55a0d0)

The above program is written in MPLAB-X 3.40 with XC8 v1.38 Compiler

Calculation logic :
The Voltage which needs to be measured is first scaled down by 20 times with the help of voltage divider circuit, so whatever voltage PIC micro-controller's analog to digital converter will measure, have to be multiplied by 20 times to get back the exact value.

Above i go with dividing the adc value by 10.
because it is approximate value.
![Image](https://github.com/SurajkumarsinghG/DC--voltmeter-measuring-0-----100v/assets/146471626/8776cd9e-a227-427c-bb12-3ad0755a5b62)

 So it's clear from the above expression, that we have (5*10/1024) as constant value, which is equivalent to = 0.098, rounded 0.1 or (1/10). to make the simple calculation.

 As we change the potentiometer (increase or decrease) the voltage value changes from 0 - 100.  







