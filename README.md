# ESP32C3-RTC
# ESP32-C3 Time Display

This repository contains Arduino code for an ESP32-C3 device to display the current time on a serial monitor.

## How to Use

1. **Install the ESP32-C3 Board:**
   - Ensure you have the ESP32-C3 board installed in your Arduino IDE.
   - Download the latest ESP-IDF and add it to your Arduino IDE.

2. **Copy the Code:**
   - Copy the code from the `time_display.ino` file.

3. **Upload to Your ESP32-C3:**
   - Open the Arduino IDE.
   - Paste the copied code into a new Arduino sketch.
   - Select your ESP32-C3 board and the appropriate serial port.
   - Upload the code to your board.

4. **Monitor Serial Output:**
   - Open the serial monitor in your Arduino IDE.
   - Set the baud rate to 115200.
   - You should see the current time displayed on the serial monitor.

## Dependencies

- WiFi library
- NTPClient library
- WiFiUdp library

## Additional Notes

- **Time Synchronization:**
  - The code relies on NTP time synchronization. Ensure your ESP32-C3 has internet access.
- **Power Supply:**
  - Provide a stable power supply to your ESP32-C3.
- **Serial Monitor:**
  - Use a USB-to-serial adapter to connect your ESP32-C3 to your computer.

## License
This project is licensed under the MIT License.
