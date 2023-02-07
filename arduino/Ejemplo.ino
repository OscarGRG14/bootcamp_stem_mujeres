// Declaración de variables
int rojo = 13;
int azul = 12;
int amarillo = 11;
int verde = 10;


// Configuración de la placa y de los pines
void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
}


// Ejecución de las instrucciones
void loop() {

  //Estrctura Repetitiva For ("PARA")
  for(int i=0; i < 3; i++){
    LedRojo();
  }

  //Estructura Repetitiva While ("MIENTRAS")  
  int j = 0;
  while(j<3){
    LedAzul();
    j=j+1;
  }

  LedAmarillo();
  
  LedVerde();

  
}

void LedRojo(){
  digitalWrite(rojo, HIGH);
  Serial.println("el led rojo esta encendido");
  delay(1000);
  digitalWrite(rojo, LOW);
  Serial.println("el led rojo esta apagado");
  delay(1000);
}


void LedAzul(){
  digitalWrite(azul, 1);
  Serial.println("el led azul esta encendido");
  delay(1000);
  digitalWrite(azul, 0);
  Serial.println("el led azul esta apagado");
  delay(1000);
}


void LedAmarillo(){
  digitalWrite(amarillo, true);
  Serial.println("el led amarillo esta encendido");
  delay(1000);
  digitalWrite(amarillo, false);
  Serial.println("el led amarillo esta apagado");
  delay(1000);
}


void LedVerde(){
  digitalWrite(verde, HIGH);
  Serial.println("el led verde esta encendido");
  delay(1000);
  digitalWrite(verde, LOW);
  Serial.println("el led verde esta apagado");
  delay(1000);
}
