const byte trigPin=D5;    //超声波模块的触发引脚

void setup(){
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600);
  Serial.println("开始");

}

void loop(){
  digitalWrite(trigPin,HIGH);
  Serial.println("high");
  delay(1000); 
  digitalWrite(trigPin,LOW);
  delay(1000); 
  Serial.println("low");  
}
