#ESP32 I2C OLED SSD1306 library for esp-idf
This is a library of i2c oled ssd1306 for [esp-idf](https://github.com/espressif/esp-idf).
Code modified from [ESP-I2C-OLED](https://github.com/baoshi/ESP-I2C-OLED).
I changed the hardware i2c driver into a software one. So you can use any two GPIO pins as SDA and SCL.
Remember to call **ssd1306_refresh** after you draw something new on the screen.
External RESET pin function is not implemented yet.
Although this lib supports two devices connecting to one i2c bus, I strongly recommend that you connect only one device to one i2c bus at the same time because I haven't tested it. I believe that the gpio pins on esp32 is enough for you to use. 