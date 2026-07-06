#include "config.h"

void setup() {
    Serial.begin(9600);
    wifiConnect();
    Client.setServer("bemfa.com", 9501);
    Client.setCallback(callback);
}

void loop() {
    if (!Client.connected() && WiFi.status() == WL_CONNECTED) {
        connectToServer();
    }
    Client.loop();
    receiveDataFrom2560();
    if (Client.connected()) {
        periodicSendToServer();
    }
}
