# Moisture_Monitor_System
We use the hardware components of Arduino uno, DHT11, pump, relay, soil moistrue sensor and solar panle system, as well as the software components of node-red, InfluxDB and Grafana to form our soil moisture monitoring system, which can monitor the soil condition through the web page.

## Hardware
- Arduino uno
- DHT11
- pump
- Relay
- Soil moistrue sensor
- Solar panle system
- Capacitive soil moisture sensor
- Breadboard
- Jumper wires
- USBpower

See the hardware folder for specific descriptions.

Below is a diagram depicting the hardware.
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/Hardware/Hardware-DHT11.jpg)
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/Hardware/Hardware-soil%20moistrue.png)
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/Hardware/Hardware-pump.jpg)

Below is a image of  the hardware.

![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/6d6ed22f46bf2085ac436c5148e736c.jpg)
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/e644d0ed40a74b39c40f4bae27dd476.jpg)
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/8599e9e8d5b2154883617941752cbff.jpg)

## Software
- Node red
  We use node red for data segmentation and email alerts.

  The follow is the node red image, and the import code can be found in the software folder.
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/Software/Node-RED.png)

- InfluxDB
  We use influxDB classification for storage and identification.

  Below is an example diagram of influxDB's database.
![image](https://github.com/zqy2023/Moisture_Monitor_System/blob/main/Software/influxDB.png)

- Grafana
  We use Grafana to visualize our data and provide a simple and easy to read GUI.

  Here's an example of grafana's dashboard, as a simple GUI. The import code can be found in the software folder.
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/Grafana%20panel.png)

## Running Tests

To run tests, run the timestamp in the node red, and open the grafana.

Before:

![image](https://github.com/zqy2023/Moisture_Monitor_System/blob/main/test%20image/grafana%20dashboard%20before%20importing%20data.png)

After:

![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/Averages.png)
![iMAGE](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/Humidity%20trend.png)
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/Rate%20of%20change.png)
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/Real-time%20humidity%20display.png)
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/Stability.png)
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/Temperature%20display%20in%20real%20time.png)
![image](https://github.com/LetMeHaveANamePlz/SoilEye/blob/main/Moisture_Monitor_System-main/test%20image/Temperature%20trend.png)

## Authors

- [Haina Wang (UTS)]
- [Can Cao (UTS)]
- [Yifan Song (UTS)]
- [Zhe Liu (UTS)]
- [Zhenlin Dai (UTS)]
- [Zhengxin Ma (UTS)]

## Support

For support, email songyifan_dl@outlook.com to contact us.
