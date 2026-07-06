#pragma once

#include <Arduino.h>
#include "serialComm.h"
#include "dataUploader.h"
#include <ESP8266WiFi.h>
#include "PubSubClient.h"

#include "wifi.h"

extern float data[3];
enum SensorIndex { SENSOR_OXYGEN = 0, SENSOR_PH = 1, SENSOR_TEMP = 2};

extern WiFiClient espClient;
extern PubSubClient Client;
extern char WiFi_SSID[];
extern char WiFi_PWD[];

#define FRAME_HEAD 0xFF
#define FRAME_TAIL 0xCB
#define DATA_LEN 3
#define DATA_FRAME 0x01
#define CMD_FRAME 0x02
#define FLAG_FRAME 0x03
