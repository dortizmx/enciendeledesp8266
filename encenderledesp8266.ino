#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <FS.h>

#include "config.h"  // Sustituir con datos de vuestra red
#include "Server.hpp"
#include "ESP8266_Utils.hpp"

void setup()
{
   pinMode(LED_BUILTIN, OUTPUT);
   pinMode(D0,INPUT);
   Serial.begin(115200);
   SPIFFS.begin();
   
   ConnectWiFi_STA();

   InitServer();
}

void loop()
{
}
