/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <ESP8266WiFi.h>

IPAddress staticIP543_10(192,168,1,10);
IPAddress gateway543_10(192,168,1,1);
IPAddress subnet543_10(255,255,255,0);

void setup()
{
  Serial.begin(9600);

    WiFi.disconnect();
  delay(3000);
  Serial.println("START");
   WiFi.begin("my-net","");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print("..");

  }
  Serial.println("Connected");
  WiFi.config(staticIP543_10, gateway543_10, subnet543_10);
  Serial.println("Your IP is");
  Serial.println((WiFi.localIP()));

}


void loop()
{


}