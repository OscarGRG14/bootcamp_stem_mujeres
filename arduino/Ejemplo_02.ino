int rojo = 2;
int amarillo = 3;
int azul = 4;
int verde = 5;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  char dato;
  if(Serial.available()>0){
    dato = Serial.read();

    if(dato == '1'){
      Serial.println("Led rojo encendido");
      digitalWrite(rojo, HIGH);
    }
    if(dato == '2'){
      Serial.println("Led rojo apagado");
      digitalWrite(rojo, LOW);
    }

    if(dato == '3'){
      Serial.println("Led amarillo encendido");
      digitalWrite(amarillo, HIGH);
    }
    if(dato == '4'){
      Serial.println("Led amarillo apagado");
      digitalWrite(amarillo, LOW);
    }

    if(dato == '5'){
      Serial.println("Led azul encendido");
      digitalWrite(azul, HIGH);
    }
    if(dato == '6'){
      Serial.println("Led azul apagado");
      digitalWrite(azul, LOW);
    }

    if(dato == '7'){
      Serial.println("Led verde encendido");
      digitalWrite(verde, HIGH);
    }
    if(dato == '8'){
      Serial.println("Led verde apagado");
      digitalWrite(verde, LOW);
    }
  }
}
