#include <WiFi.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
const char* ssid = "DESKTOP-1GQ0MNO 1520";
const char* password = "0v6863C*";
#define LCD_SDA 32
#define LCD_SCL 33
LiquidCrystal_I2C lcd(0x27, 16, 2);
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  Wire.begin(LCD_SDA, LCD_SCL);
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Connecting...");
  WiFi.begin(ssid, password);
  Serial.print("Connecting");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("WiFi Connected");
  lcd.setCursor(0,1);
  lcd.print(WiFi.localIP());

  server.begin();
  Serial.println("Server started");
}

void loop() {
  WiFiClient client = server.available(); 

  if (client) {
    Serial.println("Client Connected");
    String request = "";
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        request += c;
        if (c == '\n') {

          client.println("HTTP/1.1 200 OK");
          client.println("Content-Type: text/html");
          client.println("Connection: close");
          client.println();
          client.println("<!DOCTYPE html>");
          client.println("<html>");
          client.println("<head><title>ESP32 Task2</title></head>");
          client.println("<body>");
          client.println("<h1>Hello from ESP32</h1>");
          client.println("<p>This is your Task 2 Webpage<br></p>");
          client.println("<html><body><h1>Welcome to The deepest point of Ocean "
               "<span style=\"color: blue;\">Blue Whales</span>!"
               "</h1></body></html>");
          client.println("</body>");
          client.println("</html>");
          break;
        }
      }
    }
    delay(1);
    client.stop();
    Serial.println("Client Disconnected");
  }
}
