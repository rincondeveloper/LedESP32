#include <WiFi.h>
#include <WiFiMulti.h>
//#include <WebServer.h>
#include <LittleFS.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "cabezera.h"

WiFiMulti wifiMulti;
AsyncWebServer server(80);
const uint32_t TiempoEsperaWifi = 5000;
int ledPin = 19;
//boolean estado = false;

/*void mensajeBase();
void encenderLed();
void apagarLed();*/

void setup()
{
  Serial.begin(115200);

  Serial.println("\nIniciando LittleFS");
  if (!LittleFS.begin()) {
    Serial.println("Error montando LittleFS");
    return;
  }

  Serial.println("\nIniciando multi Wifi");
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  wifiMulti.addAP(ssid_1, password_1);
  wifiMulti.addAP(ssid_2, password_2);

  WiFi.mode(WIFI_STA);
  Serial.print("Conectando a Wifi ..");
  while (wifiMulti.run(TiempoEsperaWifi) != WL_CONNECTED) {
    Serial.print(".");
  }
  Serial.println(".. Conectado");
  Serial.print("SSID:");
  Serial.print(WiFi.SSID());
  Serial.print(" ID:");
  Serial.println(WiFi.localIP());

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/index.html", String(), false);
  });

  server.on("/style.css", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/style.css","text/css");
  });

  server.on("/script.js", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/script.js","application/javascript");
  });

  server.on("/encender", HTTP_GET, [](AsyncWebServerRequest *request){
    digitalWrite(ledPin, HIGH);
    request->send(LittleFS, "/index.html", String(), false);
  });

  server.on("/apagar", HTTP_GET, [](AsyncWebServerRequest *request){
    digitalWrite(ledPin, LOW);
    request->send(LittleFS, "/index.html", String(), false);
  });


  /*server.on("/", mensajeBase);
  server.on("/encender", encenderLed);
  server.on("/apagar", apagarLed);*/
  server.begin();

}

void loop()
{
  //server.handleClient();
  //digitalWrite(pinLed, estado);
}

/*void mensajeBase(){
  server.send(200, "text/html", pagina);
}

void encenderLed(){
  estado = true;
  Serial.print("Led encendido");
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200, "text/html", pagina);
}

void apagarLed(){
  estado = false;
  Serial.print("Led apagado");
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200, "text/html", pagina);
}*/
