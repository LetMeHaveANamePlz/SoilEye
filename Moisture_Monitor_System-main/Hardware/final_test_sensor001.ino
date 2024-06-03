#include <LiquidCrystal.h> // 引入控制LCD的库
#include <DHT.h>           // 引入控制DHT11传感器的库

// 定义连接到Arduino的LCD引脚
#define RS 0
#define E  1
#define D4 8
#define D5 9
#define D6 10
#define D7 11
LiquidCrystal lcd(RS, E, D4, D5, D6, D7); // 初始化LCD对象

// 定义DHT11传感器的连接引脚和类型
#define DHTPIN A1          // DHT11数据引脚连接到7号引脚
#define DHTTYPE DHT11     // 使用的传感器类型为DHT11
DHT dht(DHTPIN, DHTTYPE); // 初始化DHT传感器对象

#define SOIL_MOISTURE_PIN A0 // 土壤湿度传感器连接到A0模拟引脚

void setup() {
  //Serial.begin(9600);           // 初始化串行通信，波特率9600
  lcd.begin(16, 2);             // 启动LCD，设置为16字符宽，2行显示
  dht.begin();                  // 启动DHT11传感器
}

void loop() {
  // 读取传感器数据
  int soilMoisture = analogRead(SOIL_MOISTURE_PIN); // 读取土壤湿度值
  float humidity = dht.readHumidity();              // 读取空气湿度
  float temperature = dht.readTemperature();        // 读取温度

  // 更新LCD显示
  lcd.setCursor(0, 0); // 设置光标到第一行第一列
  lcd.print("T:");  // 显示“Temp:”
  lcd.print(temperature); // 显示温度值
  lcd.print(" H:"); // 显示“C Hum:”
  lcd.print(humidity); // 显示湿度值
  lcd.print("%");      // 显示百分号
  lcd.setCursor(0, 1); // 设置光标到第二行第一列
  lcd.print("Soil Moist:"); // 显示“Soil Moist:”
  lcd.print(map(soilMoisture, 0, 1023, 100, 0)); // 显示映射后的土壤湿度百分比
  lcd.print("%");      // 显示百分号
  delay(500); 
}

