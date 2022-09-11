int led = 8;
int _delay = 1000;
void BlinkTest(){
    digitalWrite(led, HIGH); 
    delay(_delay); 
    digitalWrite(led, LOW); 
    delay(_delay);
}

void setup() {
  pinMode(led, OUTPUT);
}


void loop() {
    
BlinkTest();
    while(1){}
}
