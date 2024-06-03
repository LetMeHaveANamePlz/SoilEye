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
![image]()
![image]()


## Software
- Node red
  We use node red for data segmentation and email alerts.

  The follow is the node red image, and the import code can be found in the software folder.
![image](https://github.com/zqy2023/Moisture_Monitor_System/blob/main/Software/node_red.png)

- InfluxDB
  We use influxDB classification for storage and identification.

  Below is an example diagram of influxDB's database.
![image](https://github.com/zqy2023/Moisture_Monitor_System/blob/main/Software/influxDB.png)

- Grafana
  We use Grafana to visualize our data and provide a simple and easy to read GUI.

  Here's an example of grafana's dashboard, as a simple GUI. The import code can be found in the software folder.
![image](https://github.com/zqy2023/Moisture_Monitor_System/blob/main/Software/grafana_dashboard.png)

## Running Tests

To run tests, run the timestamp in the node red, and open the grafana.

Before:

![image](https://github.com/zqy2023/Moisture_Monitor_System/blob/main/test%20image/grafana%20dashboard%20before%20importing%20data.png)

After:

![image](https://github.com/zqy2023/Moisture_Monitor_System/blob/main/test%20image/grafana%20dashboard%20after%20importing%20data.png)

## Authors

- [Haina Wang (UTS)](https://github.com/zqy2023)
- [Can Cao (UTS)]
- [Zhe Liu (UTS)]
- [Zhenlin Dai (UTS)]
- [Mohan Li (UTS)]

## Support

For support, email wanghainacn@outlook.com to contact us.
