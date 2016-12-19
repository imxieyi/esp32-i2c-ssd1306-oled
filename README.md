#ESP32 I2C OLED SSD1306 library for esp-idf

This is a library of i2c oled ssd1306 for [esp-idf](https://github.com/espressif/esp-idf).

Code modified from [ESP-I2C-OLED](https://github.com/baoshi/ESP-I2C-OLED).

I changed the code style into C++. So you can easily use multiple devices by create different objects. I also changed the hardware i2c driver into a software one. So you can use any two GPIO pins as SDA and SCL.

Pay attention that OLED class has two different constructors. One with default I2C address 0x78, but in the other you can set manual address.

Remember to call **refresh** after you draw something new on the screen.

External RESET pin function is not implemented yet.

**NOTICE:** If you want to use pure C method, please turn to branch [pure-c](https://github.com/imxieyi/esp32-i2c-ssd1306-oled/tree/pure-c)

