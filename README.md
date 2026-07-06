## Introduction

An ESP8266-based project for MQTT-based cloud communication in embedded systems.

Once booted, users need to connect to the **specific** hotspot.

Once connected to the Internet, it will periodically publish data to the MQTT server, receive and handle commands from server.

## Features

- #### MQTT communication

  - Periodic sensor data publishing.
  - Subscription to the control topic & command handling.

- #### Serial communication

  - Receiving sensor data from Mega 2560.
  - Sending control commands.

## Teck Stack

- #### Hardware

  - ESP8266

- #### Development

  - Platform IO

- #### libs included

  - Arduino
  - ESP8266WiFi
  - ESP8266WebServer (not async version)
  - PubSubClient

## Demo

- Coming soon.
