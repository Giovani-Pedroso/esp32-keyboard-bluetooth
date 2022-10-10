#include "bluetooth_config.h"
#include "esp_bt.h"
#include "esp_log.h"

static const char TAG[] = "CONFIG_BLUETOOTH";
void bluetooth_config() {
  ESP_LOGI(TAG, "initializing the bluetooth");

  ESP_LOGI(TAG, "bluetooth initialized");
}
