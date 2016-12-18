#include "esp_log.h"
#include "ssd1306.h"
#include "fonts.h"

void app_main() {

	if (ssd1306_init(0, 19, 22)) {
		ESP_LOGI("OLED", "oled inited");
		ssd1306_draw_rectangle(0, 10, 30, 20, 20, 1);
		ssd1306_select_font(0, 0);
		ssd1306_draw_string(0, 0, 0, "glcd_5x7_font_info", 1, 0);
		ssd1306_select_font(0, 1);
		ssd1306_draw_string(0, 0, 18, "tahoma_8pt_font_info", 1, 0);
		ssd1306_draw_string(0, 55, 30, "Hello ESP32!", 1, 0);
		ssd1306_refresh(0, true);
	} else {
		ESP_LOGE("OLED", "oled init failed");
	}

}

