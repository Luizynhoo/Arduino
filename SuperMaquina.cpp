/**
   A super máquina (efeito luminoso)
   @author Mestre Luiz Henrique
*/

int tempo = 400;

void setup () {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop () {
  for (int led = 9; led <= 13; led++) {
    digitalWrite(led, HIGH);
    delay(tempo);
    digitalWrite(led, LOW);

  }
  for (int led = 12; led >= 10; led--) {
    digitalWrite(led, HIGH);
    delay(tempo);
    digitalWrite(led, LOW);
   
  }
}
