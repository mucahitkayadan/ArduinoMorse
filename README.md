 Arduino Morse Code

Arduino Morse Code
==================

This project demonstrates the usage of the Morse class for emitting Morse code sequences using an Arduino board.

Components
----------

*   Arduino board
*   LED or output device
*   Resistor (if necessary)

Setup
-----

1.  Connect the LED or output device to pin 13 (or modify the pin number in the code).
2.  Upload the sketch to your Arduino board.

Usage
-----

The code in the test.ino file emits the SOS distress signal in Morse code using the Morse class. The sequence can be modified according to your needs.

The Morse class provides the following member functions:

*   `dot()`: Emits a short dot signal.
*   `dash()`: Emits a longer dash signal.
*   `dot(int num)`: Emits multiple short dot signals specified by the `num` parameter.
*   `dash(int num)`: Emits multiple longer dash signals specified by the `num` parameter.

By combining these functions, you can create your own Morse code sequences.

Example
-------

The provided example code in test.ino emits the SOS distress signal, which is represented as "... --- ..." in Morse code.

License
-------

This project is licensed under the MIT License.

For more details, see the [LICENSE](LICENSE) file.
