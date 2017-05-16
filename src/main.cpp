#include "Arduino.h"
#include <RF22ReliableDatagram.h>
#include <RF22.h>
#include <SPI.h>

#define CLIENT_ADDRESS 1
#define SERVER_ADDRESS 0

RF22ReliableDatagram manager(CLIENT_ADDRESS);

void setup() {
  Serial.begin(9600);
  Serial.println("Starting ant...");
  if (manager.init())
    Serial.println("init success for ant");
  else
    Serial.println("init failed for ant");
}

void loop() {

}
