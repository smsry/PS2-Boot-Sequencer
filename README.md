# PS2 Boot Sequencer
 Allows 900xx PS2 Slim models to directly boot into FreeMCBoot by sequencing the buttonpresses needed through IR.
<p align="center">
  <img width="400" height="300" src="https://github.com/smsry/PS2-Boot-Sequencer/blob/main/Images/1.jpg">
</p>

Usually SCPH-900xx PS2 Slim models are not capable of booting directly into FreeMCBoot and are needed to do a sequence of button presses in the PS2 Browser to enter the FreeMCBoot menu.

This has to be done each and every single time the PS2 is turned on and if you're like me who uses VGA Monitors and Dualshock 3 Controllers to use the PS2, then you would know it gets very annoying to turn the PS2 on.

To solve this, I made a Sequencer from an Arduino nano which uses an IR LED and the PS2's inbuilt IR receiver to send buttonpress codes to the PS2 to turn the PS2 ON.

The IR Sequence my code follows when the "NEW" Power button is pressed is:

- Power the PS2 On
- Wait 10 seconds (for the PS2 Menu to show up)
- Press X button
- Wait 3 Seconds (for the Memory cards to laod)
- Press X button
- Wait 1 second
- Press Circle twice

This allows the PS2 to load into the FreeMCBoot menu.

The Arduino circuit itself is very simple. its a push button and an infrared emitter LED connected to the digital pins of the Arduino. 

<p align="center">
  <img width="" height="" src="https://github.com/smsry/PS2-Boot-Sequencer/blob/main/ir%20sequencer_circuit%20diagram.png">
</p>
