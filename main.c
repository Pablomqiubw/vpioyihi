void app_main(void)
{
    ESP_LOGI(TAG, "================================");
    ESP_LOGI(TAG, "  Inversor Monofasico SPWM");
    ESP_LOGI(TAG, "================================");

    esp_task_wdt_deinit();
    gpio_setup();
    bluetooth_init();

    vTaskDelay(pdMS_TO_TICKS(500));

    xTaskCreatePinnedToCore(spwm_task,   "spwm",   4096, NULL, 9, NULL, 1);
    xTaskCreatePinnedToCore(button_task, "btn",    3072, NULL, 5, NULL, 0);
    xTaskCreatePinnedToCore(debug_task,  "debug",  2048, NULL, 2, NULL, 0);
}
