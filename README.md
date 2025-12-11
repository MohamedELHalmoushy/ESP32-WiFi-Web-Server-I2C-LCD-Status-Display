# -ESP32-WiFi-Web-Server-I2C-LCD-Status-Display
### — Serve a Webpage & Display IP Address on I2C LCD

<p align="center">
  <img src="https://img.shields.io/badge/Platform-ESP32-blue?style=for-the-badge">
  <img src="https://img.shields.io/badge/Display-I2C%20LCD-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/Web%20Server-HTTP%2080-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/Language-C++-yellow?style=for-the-badge">
</p>

## 📌 Overview  
This project demonstrates:

- Connecting ESP32 to a WiFi network  
- Showing **WiFi status + IP address** on a **16x2 I2C LCD**  
- Running an **HTTP Web Server on port 80**  
- Serving a custom HTML webpage including styled text  

When a client visits the ESP32 IP (e.g., `192.168.x.x`), it loads a webpage that displays:

> Hello from ESP32 — Task 2  
> Welcome to the deepest point of the ocean: **Blue Whales**

---

## 🚀 Features  
✔️ WiFi connection + IP detection  
✔️ I2C LCD status display  
✔️ Web server responds with HTML  
✔️ Works on mobile & laptop browsers  
✔️ Clean, structured code  

---

## 🛠️ Hardware Requirements  

| Component | Description |
|----------|-------------|
| ESP32 Dev Module | Main microcontroller |
| 16x2 I2C LCD (0x27) | Shows WiFi + IP |
| Jumper Wires | I2C communication |
| USB Cable | Power & programming |

---

## 🔌 Wiring Diagram  

| ESP32 Pin | LCD Pin |
|-----------|---------|
| GPIO 32   | SDA |
| GPIO 33   | SCL |
| 5V        | VCC |
| GND       | GND |

---

## 📡 WiFi Settings  

| Parameter | Value |
|----------|--------|
| SSID | `DESKTOP-1GQ0MNO 1520` |
| Password | `0v6863C*` |
| Server Port | 80 |

🖥️ Serial Monitor Output
Connecting....
Connected!
IP Address: 192.168.x.x
Server started
Client Connected
Client Disconnected

🚀 How to Run

Install ESP32 board package in Arduino IDE

Install LiquidCrystal_I2C library

Select your ESP32 board

Upload code

After boot:

LCD will show WiFi Connected

LCD will show IP Address

Open browser → enter the IP

Webpage loads from ESP32

🔮 Future Enhancements

Add buttons to control LEDs from the webpage

Add JSON API endpoint

Add real web UI (CSS + JavaScript)

Add sensor readings on webpage

👨‍💻 Author

Mohamed EL-Halmoushy
Embedded Systems | IoT | ESP32 Developer

⭐ Support

If you like this project, please ⭐ the repo!
