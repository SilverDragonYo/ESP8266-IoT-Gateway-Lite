#include "config.h"

char WiFi_SSID[21] = "yuanshen";
char WiFi_PWD[21] = "yuanshen";

WiFiClient espClient;
PubSubClient Client(espClient);

void wifiConnect() {
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(WiFi_SSID);
    Serial.print("PWD: ");
    Serial.println(WiFi_PWD);
    WiFi.mode(WIFI_STA);
    WiFi.begin(WiFi_SSID, WiFi_PWD);
}
