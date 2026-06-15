// LEITOR DE TEMPERATURA NTC E LUMINOSIDADE LDR - ARDUINO UNO

int NTC = A0;
int LDR = A1;
int LED = 8;
int leitura;

float lerTemperatura() {
  int adc = analogRead(NTC);
  float r_ntc = 10000.0 * (1023.0 - adc) / adc;   // resistencia do NTC
  float inv_t = (1.0 / 298.15) + (log(r_ntc / 10000.0) / 3950.0);
  return (1.0 / inv_t) - 273.15;                  // temperatura em Celsius
}

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  leitura = analogRead(LDR);

    if(leitura > 900) {
    digitalWrite(LED, HIGH);
    }
    else {
    digitalWrite(LED, LOW);
    }
  Serial.print("Luminosidade: ");
  Serial.print(leitura);
  
  Serial.print("  |  Temperatura: ");
  Serial.print(lerTemperatura(), 1);
  Serial.println(" C");

  delay(1000);
}
