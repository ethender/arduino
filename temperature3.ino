//
//    FILE: dht11_test.ino
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.01
// PURPOSE: DHT library test sketch for DHT11 && Arduino
//     URL:
//
// Released to the public domain
//

#include <dht.h>

dht DHT;

#define DHT11_PIN 5

void setup()
{
  Serial.begin(115200);
  Serial.println("DHT TEST PROGRAM ");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT_LIB_VERSION);
  Serial.println();
  Serial.println("temperature, humidity");
}

void loop()
{
  // READ DATA
  Serial.print("DHT11, \t");
  int chk = DHT.read11(DHT11_PIN);
 
  // DISPLAY DATA
  Serial.print(DHT.temperature, 1);
  Serial.print(" c");
  Serial.print(",\t");
  Serial.print(DHT.humidity, 1);
  Serial.println("%");
  delay(120000);
}
//
// END OF FILE
//

