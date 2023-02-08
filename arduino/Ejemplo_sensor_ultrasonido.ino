int trig = 12;
int echo = 13;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  long duracion;
  long distancia;

  digitalWrite(trig, LOW);
  delayMicroseconds(4);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duracion = pulseIn(echo, HIGH);
  duracion = duracion / 2;

  distancia = duracion / 29;

  Serial.println(distancia, "cm");

  delay(50);
}
