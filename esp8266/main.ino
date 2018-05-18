#include <ESP8266WiFi.h>

const char* ssid = "******";
const char* password = "********";

const char* host = "*******";
const int port=3001;

void setup()
{
	pinMode(0, OUTPUT);

	Serial.begin(115200);
	Serial.println();

	Serial.print("Connecting");
	WiFi.begin(ssid, password);
	while (WiFi.status() != WL_CONNECTED)
	{
	  delay(500);
	  Serial.print(".");
	}
	Serial.println("");  
	Serial.println("WiFi connected");    
	Serial.println("IP address: ");  
	Serial.println(WiFi.localIP());  
}


void loop()
{
  WiFiClient client;

  Serial.printf("\n[Connecting to %s ... ", host);
  if (client.connect(host, port))
  {
    Serial.println("connected]");
    client.write("connected");
    Serial.println("");
    Serial.println("[Response:]");
    while (client.connected())
    {
      if (client.available())
      {
        String line = client.readStringUntil('\n');
        Serial.println(line);
        if(line=="LEDLOW")
        	digitalWrite(0, LOW);
        else if(line=="LEDHIGH")
        	digitalWrite(0, HIGH);
        Serial.println(line);
      }
    }
  }
  else
  {
    Serial.println("connection failed!]");
    client.stop();
  }
  Serial.println("END/n");
}
