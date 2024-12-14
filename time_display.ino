#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

const char* ssid = "C24";
const char* password = "        ";
const int ntpServerPort = 123;
const char* ntpServerName = "pool.ntp.org";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, ntpServerName, ntpServerPort);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {delay(1000);Serial.println("Connecting to WiFi...");}
  Serial.println("Connected to WiFi");
  timeClient.begin();
}

void loop() {
  timeClient.update();
  time_t now = timeClient.getEpochTime();
  struct tm *ptm = gmtime(&now);
  char timeString[20];
  sprintf(timeString, "%02d:%02d:%02d", ptm->tm_hour, ptm->tm_min, ptm->tm_sec);
  Serial.println(timeString);
  delay(1000);
}
