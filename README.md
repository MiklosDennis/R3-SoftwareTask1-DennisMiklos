Created by: Dennis Miklos
Email: dmiklos@ryerson.ca
Date: 9/28/2021

Link to tinkercad: https://www.tinkercad.com/things/jjv7cnHgY78-r3-robotics-task1
The tinkercad digagram can be found in the above link.

To run program:
Click the simulate button and adjust the potentiometer by clicking a draging the mouse
clockwise or counter clockwise. 
To validate 7-segment display results press code and then press serial monitor. 
The serial monitor will display the mapped potentiometer values.

The circuit and software procedures are the follwoing:
1. Declare digital pins 3-10 as outputs. These pins will be used to send
   the signals to the CD4511 decoders.
2. Inside the loop function the first step is to read the potentionmeter value.
3. Next map the potentiometer values between 0 and 99. 
4. Determine the first digit by divinding the mapped value by 10.
5. Convert the first digit to binary and set the digital pin according to the bit value 
6. Determine the second digit by finding the remainder when diving by 10. This is done
   using the modulus (%).
7. Convert the second digit to binary and set the digital pin according to the bit value
8. Repeat steps 2 - 7 until program is terminated.
