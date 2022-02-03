#include <Arduino.h>
#include <MeAuriga.h>

MeOnBoardTemp temperature_onboard(13);

void setup()
{
  // put your setup code here, to run once:

  Serial.begin(115200);

}

void loop()
{
  // put your main code here, to run repeatedly:

  Serial.println(temperature_onboard.readValue());
  
  delay(100);
}
