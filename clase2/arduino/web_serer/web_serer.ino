/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <ESP8266WiFi.h>

WiFiServer server(80);
String  ClientRequest;

void setup()
{
  Serial.begin(9600);

    Serial.println("START");
  WiFi.softAP("moises_wifi","12345678");
  Serial.println((WiFi.softAPIP()));
  server.begin();

}


void loop()
{
  WiFiClient client = server.available();
  if (!client) {
    return;
  }
  while (!client.available()) {
    delay(1);
  }
  ClientRequest = (client.readStringUntil('\r'));
  Serial.println(ClientRequest);
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("");
    client.println("<!DOCTYPE HTML>");
    client.println("<html>");
    client.println("<head>");
      client.println("Hola Mundo");
    client.println("</head>");
    client.println("<body>");
    client.println("</body>");
    client.println("</html>");
    client.stop();
     delay(1);

}
