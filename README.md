MULTIMETER

Written by -> Sarun Sathis 


DISCLAIMER : 
The author does not take responsiblity for any loss or damage of any of the components used. These codes are wriiten only for fun activity and not intended for regular uasges. The  users are requested to flow the normal norms and safety measure before testing this model in dangerous situations. This project is still in the development stage and cannot yet replace the existing multimeter. Users are free to make changes to code or even suggest codes. This projects has been tested on TinkerCAD. BE SAFE AND HAVE FUN


COMPONENTS USED :-
Arduino UNO , 16*2 LCD display , resistors of 1Kohm,9Kohm,10Kohm ,pushbutton switch , jumper wire , 3 electrodes


CONNECTIONS :-

GND connections has to be grounded across for proper functioning

LCD => DB4-DB7 = PIN 4-7 , RS = 8 , E = 9 , Rest are connected accordingly to 5V or GND with resistors and variable resistance.

AMMETER AND VOLTMETER CONNECTION => 9Kohm and 1Kohm resistor cinnected in series. +ve Input electrode goes to free end of 9Kohm and GND to the other free end. from the common terminal a wire is connected to A0 pin. this circuit basically acts as a voltage divider and divides the ecternal voltage by 10, thus can measure voltage from 0V to 50V ideally.

OHMMETER => here the Resistance is places between the 3rd electrode and the positive electrode.3rd elctrode connects to a resistor of 10Kohm the free end of the resistance is connected to GND.The common +ve terminal is connected to 5V output of arduino. This circuit works on the principle of volatge divider.

PUSH BUTTON SWITCH => one end of the switvhnis connected to pin 3 and the diagonal end to 5V or 3.3V of arduino.
