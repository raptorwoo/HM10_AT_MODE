// Serial 사용법과 SoftwareSerial 사용법은 거의 유사하다.
#include <SoftwareSerial.h>

SoftwareSerial bthSerial(2, 3); 

void setup(){
  Serial.begin(9600);
  bthSerial.begin(9600);    // Bluetooth는 data rate을 115200으로 설정해야 함
}

void loop(){
  while (bthSerial.available())
    Serial.write(bthSerial.read());
  while (Serial.available())
    bthSerial.write(Serial.read());
  delay(100);
}


