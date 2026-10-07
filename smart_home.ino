#include "thingProperties.h"

#define relay1_pin 13
#define relay2_pin 12
#define relay3_pin 14
#define relay4_pin 27

void setup() {
  pinMode(relay1_pin, OUTPUT);
  pinMode(relay2_pin, OUTPUT);
  pinMode(relay3_pin, OUTPUT);
  pinMode(relay4_pin, OUTPUT);

  Serial.begin(9600);
  delay(1500);

  initProperties();

  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
}

void onRelay1Change() {
  Serial.println("On-Change Event Relay 1");

  if (relay1 == 1) {
    digitalWrite(relay1_pin, HIGH);
  } else {
    digitalWrite(relay1_pin, LOW);
  }
}

void onRelay2Change() {
  Serial.println("On-Change Event Relay 2");

  if (relay2 == 1) {
    digitalWrite(relay2_pin, HIGH);
  } else {
    digitalWrite(relay2_pin, LOW);
  }
}

void onRelay3Change() {
  Serial.println("On-Change Event Relay 3");

  if (relay3 == 1) {
    digitalWrite(relay3_pin, HIGH);
  } else {
    digitalWrite(relay3_pin, LOW);
  }
}

void onRelay4Change() {
  Serial.println("On-Change Event Relay 4");

  if (relay4 == 1) {
    digitalWrite(relay4_pin, HIGH);
  } else {
    digitalWrite(relay4_pin, LOW);
  }
}