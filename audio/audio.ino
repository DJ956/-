#include <DFPlayer_Mini_Mp3.h>
#include <SoftwareSerial.h>

const int BUSY_PIN = 7;
const int INPUT_PIN = 21;

SoftwareSerial mySerial(0,1);

void setup() {
  Serial.begin(9600);
  mp3_set_serial(mySerial);
  delay(1);

  mp3_set_volume(30);
  
  pinMode(BUSY_PIN, OUTPUT);

  digitalWrite(BUSY_PIN, HIGH);
  }

void loop() {

}
