
const int ledout[] = {
  8, 9, 10
}; 
int pinCount = 3; 

const int Sensor[]={
  2,3,4,5,6,7
};
int sensorCount=6;

//configurasi pin I/O
void setup() {
  // put your setup code here, to run once:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledout[thisPin], OUTPUT);
  }
  for (int thisPin = 0; thisPin < sensorCount; thisPin++) {
    pinMode(Sensor[thisPin], INPUT);
  }
  
}

//program utama
void loop() {
  // put your main code here, to run repeatedly:
  
  
}

//fungsi untuk menyalakan lampu
int nyala(int l){
    
}


