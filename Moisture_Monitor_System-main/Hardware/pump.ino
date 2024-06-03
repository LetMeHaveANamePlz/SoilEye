const int buttonPin = 5;    // 按钮连接的引脚
const int relayPin = 6;     // 继电器连接的引脚
bool pumpRunning = false;   // 水泵当前的运行状态
int lastButtonState = HIGH; // 上一次按钮的状态，初始为未按下

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // 设置按钮引脚为输入模式，并启用内部上拉电阻
  pinMode(relayPin, OUTPUT);         // 设置继电器引脚为输出模式
  digitalWrite(relayPin, LOW);       // 确保水泵开始时是关闭的
}

void loop() {
  int buttonState = digitalRead(buttonPin);  // 读取按钮状态

  // 检查按钮是否被按下（从未按下变为按下）
  if (buttonState == LOW && lastButtonState == HIGH) {
    // 切换水泵的运行状态
    pumpRunning = !pumpRunning;

    // 根据水泵的新状态开启或关闭水泵
    if (pumpRunning) {
      digitalWrite(relayPin, HIGH); // 开启水泵
    } else {
      digitalWrite(relayPin, LOW);  // 关闭水泵
    }
    delay(50); // 短暂延迟以避免抖动
  }

  lastButtonState = buttonState;  // 更新按钮状态，以备下一次循环检查
  delay(50);  // 稍微延迟，避免读取到抖动
}
