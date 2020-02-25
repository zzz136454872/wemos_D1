#define inpin D2

#define outpin D8


void ICACHE_RAM_ATTR InterruptFunc(){   //中断响应函数
  Serial.println("Hello ESP8266");
}



void setup() {
    Serial.begin(9600);//设置串口波特率
    pinMode(inpin,INPUT);
    pinMode(outpin,OUTPUT);
    attachInterrupt(digitalPinToInterrupt(D2), InterruptFunc, RISING);//设置中断号、响应函数、触发方式
}

void loop() {
  delay(2000);
  digitalWrite(outpin,HIGH);
  Serial.println("high");
  delay(2000);
  digitalWrite(outpin,LOW);
  Serial.println("low");
}
