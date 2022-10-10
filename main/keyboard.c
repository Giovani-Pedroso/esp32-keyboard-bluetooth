#include "esp_bt.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/portmacro.h"
#include "freertos/task.h"
#include <stdio.h>

#include "bluetooth_config.h"
static const char TAG[] = "MAIN";

void app_main(void) {
  ESP_LOGI(TAG, "Hello");

  bluetooth_config();

  for (;;) {
    ESP_LOGI(TAG, "Hello I am in a loop");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}
