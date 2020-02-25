
void setup() {
    Serial.begin(9600);
    Serial.println("开始");
}


int digpins[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13};
int anapins[]={A0,A1,A2,A3,A4,A5};
char* digname[]={"D0","D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13"};
char* ananame[]={"A0","A1","A2","A3","A4","A5"};



void loop() {
    int i;
    for(i=0;i<14;i++)
    {
        Serial.print(digname[i]);
        Serial.print(" : ");
        Serial.println(digpins[i]);
        delay(100);
    }

    for(i=0;i<6;i++)
    {
        Serial.print(ananame[i]);
        Serial.print(" : ");
        Serial.println(anapins[i]);
        delay(100);
    }
    //Serial.println("test");
    delay(2000);
}
    
