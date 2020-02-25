//#define pwnOut D2
#define pwnOut 3
#define analogIn A0

void setup() {
    pinMode(pwnOut,OUTPUT);
    pinMode(analogIn,INPUT);
    Serial.begin(9600);
}

void loop() {
    int r;
    for(int i=0;i<10;i++)
    {
        analogWrite(pwnOut,i*10);
        delay(50);
        r=analogRead(analogIn);
        Serial.println(i*10);
        Serial.println(r);
        Serial.println();
        delay(2000);
    }
}
