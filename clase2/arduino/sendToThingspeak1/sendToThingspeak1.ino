/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <ESP8266WiFi.h>

#include <ESP8266HTTPClient.h>

WiFiClient client;

String thingSpeakAddress= "http://api.thingspeak.com/update?";
String writeAPIKey;
String tsfield1Name;
String request_string;

HTTPClient http;

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
  Serial.println("Connected");
  Serial.println("Your IP is");
  Serial.println((WiFi.localIP()));

}


void loop()
{
    int my_rand = random(1,20);
    int my_rand2 = random(10,30);
    
    if (client.connect("api.thingspeak.com",80)) {
      writeAPIKey = "key=JYLKR4WVJ5NPEPOC";
      tsfield1Name = "&field1=10";
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "L7ESZB0U1XTWAIQW";
      request_string += "&";
      request_string += "field1";
      request_string += "=";
      request_string += String(my_rand);

      request_string += "&";
      request_string += "field2";
      request_string += "=";
      request_string += String(my_rand2);

      
      http.begin(request_string);
      http.GET();
      http.end();

    }
    delay(20000);

}
