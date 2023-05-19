#define cont 3
void setup(){
    pinMode(cont, OUTPUT);
}

void loop(){
    tone(cont, 500);
}