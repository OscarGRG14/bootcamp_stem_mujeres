int EntradaMotor1_in1 = 2;
int EntradaMotor1_in2 = 3;

int EntradaMotor2_in3 = 4;
int EntradaMotor2_in4 = 5;

void setup() {
  pinMode(EntradaMotor1_in1, OUTPUT);
  pinMode(EntradaMotor1_in2, OUTPUT);
  pinMode(EntradaMotor2_in3, OUTPUT);
  pinMode(EntradaMotor2_in4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char dato;
  if(Serial.available()>0){
    dato = Serial.read();
    switch(dato){
      case '1':
        fordward();
      break;
      case '2':
        backward();
      break;
      case '3':
        right();
      break;
      case '4':
        left();
      break;
      case '5':
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
  digitalWrite(EntradaMotor1_in2, LOW);
  digitalWrite(EntradaMotor2_in3, HIGH);
  digitalWrite(EntradaMotor2_in4, LOW);
}


void left(){
  digitalWrite(EntradaMotor1_in1, HIGH);
  digitalWrite(EntradaMotor1_in2, LOW);
  digitalWrite(EntradaMotor2_in3, LOW);
  digitalWrite(EntradaMotor2_in4, LOW);
}

void stop(){
  digitalWrite(EntradaMotor1_in1, LOW);
  digitalWrite(EntradaMotor1_in2, LOW);
  digitalWrite(EntradaMotor2_in3, LOW);
  digitalWrite(EntradaMotor2_in4, LOW);
}
