#include <ESP8266WiFi.h>


IPAddress staticIP655_100(192,168,1,100);
IPAddress gateway655_100(192,168,1,1);
IPAddress subnet655_100(255,255,255,0);

void setup()
{
  Serial.begin(9600);

    WiFi.disconnect();
  delay(3000);
  Serial.println("START");
   WiFi.begin("MOVISTAR_47DE","labotec123");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print("..");

  }
  WiFi.config(staticIP655_100, gateway655_100, subnet655_100);
  Serial.println("Connected");
  Serial.println("Your IP is");
  Serial.println((WiFi.localIP()));

}


void loop()
{


}
