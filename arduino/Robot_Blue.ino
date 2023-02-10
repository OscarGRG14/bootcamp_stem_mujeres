#include <SoftwareSerial.h>

SoftwareSerial ModuloBlue(3, 2); // RX, TX 

int EntradaMotor1_in1 = 13;
int EntradaMotor1_in2 = 12;

int EntradaMotor2_in3 = 11;
int EntradaMotor2_in4 = 10;

void setup() {
  pinMode(EntradaMotor1_in1, OUTPUT);
  pinMode(EntradaMotor1_in2, OUTPUT);
  pinMode(EntradaMotor2_in3, OUTPUT);
  pinMode(EntradaMotor2_in4, OUTPUT);
  Serial.begin(9600);

  ModuloBlue.begin(9600);
}

void loop() {
  char dato;
  if(ModuloBlue.available()>0){
    dato = ModuloBlue.read();
    Serial.println(dato);
    switch(dato){
      case '1':
        fordward();
      break;
      case '4':
        backward();
      break;
      case '2':
        right();
      break;
      case '3':
        left();
      break;
      case '0':
        stop();
      break;
    } 
  }
}


void fordward(){
  digitalWrite(EntradaMotor1_in1, HIGH);
  digitalWrite(EntradaMotor1_in2, LOW);
  digitalWrite(EntradaMotor2_in3, HIGH);
  digitalWrite(EntradaMotor2_in4, LOW);
}

void backward(){
  digitalWrite(EntradaMotor1_in1, LOW);
  digitalWrite(EntradaMotor1_in2, HIGH);
  digitalWrite(EntradaMotor2_in3, LOW);
  digitalWrite(EntradaMotor2_in4, HIGH);
}

void right(){
  digitalWrite(EntradaMotor1_in1, LOW);
  digitalWrite(EntradaMotor1_in2, HIGH);
  digitalWrite(EntradaMotor2_in3, HIGH);
  digitalWrite(EntradaMotor2_in4, LOW);
}


void left(){
  digitalWrite(EntradaMotor1_in1, HIGH);
  digitalWrite(EntradaMotor1_in2, LOW);
  digitalWrite(EntradaMotor2_in3, LOW);
  digitalWrite(EntradaMotor2_in4, HIGH);
}

void stop(){
  digitalWrite(EntradaMotor1_in1, LOW);
  digitalWrite(EntradaMotor1_in2, LOW);
  digitalWrite(EntradaMotor2_in3, LOW);
  digitalWrite(EntradaMotor2_in4, LOW);
}
