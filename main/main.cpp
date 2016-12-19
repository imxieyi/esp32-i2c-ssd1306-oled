#include "esp_log.h"
#include "fonts.h"
#include "include/ssd1306.hpp"

#ifdef __cplusplus
extern "C" {
#endif
void app_main() {

	OLED oled = OLED(GPIO_NUM_19, GPIO_NUM_22, SSD1306_128x64);
	if (oled.init()) {
		ESP_LOGI("OLED", "oled inited");
		oled.draw_rectangle(10, 30, 20, 20, WHITE);
		oled.select_font(1);
		oled.draw_string(0, 0, "glcd_5x7_font_info", WHITE, BLACK);
		oled.draw_string(0, 18, "tahoma_8pt_font_info", WHITE, BLACK);
		oled.draw_string(55, 30, "Hello ESP32!", WHITE, BLACK);
		oled.refresh(true);
	} else {
		ESP_LOGE("OLED", "oled init failed");
	}
}
#ifdef __cplusplus
}
#endif
