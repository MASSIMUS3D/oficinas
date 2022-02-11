String primeiro;
String segundo;
String terceiro;
String quarto;
String quinto;
String sexto;
String setimo;
String oitavo;
String nono;
String decimo;
String partir;
String sequencia;

void bloqueio() {
  while (analogRead(A0) < 600) {
    Serial.println("Soltar botão");
    digitalWrite(12,LOW);
  }
  digitalWrite(12,HIGH);
}

void leitura() {
  if (sequencia == "frente") {
    analogWrite(5,1024);
    analogWrite(4,500);
    digitalWrite(0,LOW);
    digitalWrite(2,LOW);
    delay(500);
    analogWrite(5,0);
    analogWrite(4,0);

  }
  if (sequencia == "tras") {
    analogWrite(5,1024);
    analogWrite(4,500);
    digitalWrite(0,HIGH);
    digitalWrite(2,HIGH);
    delay(500);
    analogWrite(5,0);
    analogWrite(4,0);

  }
  if (sequencia == "esquerda") {
    analogWrite(5,1024);
    analogWrite(4,500);
    digitalWrite(0,HIGH);
    digitalWrite(2,LOW);
    delay(485);
    analogWrite(5,0);
    analogWrite(4,0);

  }
  if (sequencia == "direita") {
    analogWrite(5,1024);
    analogWrite(4,500);
    digitalWrite(0,LOW);
    digitalWrite(2,HIGH);
    delay(485);
    analogWrite(5,0);
    analogWrite(4,0);

  }
}

void posicao1() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    primeiro = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    primeiro = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    primeiro = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    primeiro = "esquerda";

  }
  delay(10);
}

void posicao2() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    segundo = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    segundo = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    segundo = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    segundo = "esquerda";

  }
  delay(10);
}

void posicao3() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    terceiro = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    terceiro = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    terceiro = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    terceiro = "esquerda";

  }
  delay(10);
}

void posicao4() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    quarto = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    quarto = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    quarto = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    quarto = "esquerda";

  }
  delay(10);
}

void posicao5() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    quinto = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    quinto = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    quinto = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    quinto = "esquerda";

  }
  delay(10);
}

void posicao6() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    sexto = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    sexto = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    sexto = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    sexto = "esquerda";

  }
  delay(10);
}

void posicao7() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    setimo = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    setimo = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    setimo = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    setimo = "esquerda";

  }
  delay(10);
}

void posicao8() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    oitavo = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    oitavo = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    oitavo = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    oitavo = "esquerda";

  }
  delay(10);
}

void posicao9() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    nono = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    nono = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    nono = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    nono = "esquerda";

  }
  delay(10);
}

void posicao10() {
  while (analogRead(A0) > 600) {
    Serial.println("leitura1");
    delay(1);
  }
  delay(100);
  if (analogRead(A0) > 250 && analogRead(A0) <= 600) {
    partir = "movimento";

  }
  delay(10);
  if (analogRead(A0) > 80 && analogRead(A0) <= 120) {
    decimo = "frente";

  }
  delay(10);
  if (analogRead(A0) > 25 && analogRead(A0) <= 80) {
    decimo = "tras";

  }
  delay(10);
  if (analogRead(A0) > 120 && analogRead(A0) <= 250) {
    decimo = "direita";

  }
  delay(10);
  if (analogRead(A0) > 0 && analogRead(A0) <= 25) {
    decimo = "esquerda";

  }
  delay(10);
}

void setup(){
  primeiro = "parado";
  segundo = "parado";
  terceiro = "parado";
  quarto = "parado";
  quinto = "parado";
  sexto = "parado";
  setimo = "parado";
  oitavo = "parado";
  nono = "parado";
  decimo = "parado";
  partir = "parado";
  sequencia = "parado";
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop(){
  digitalWrite(12,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  while (partir == "parado" && decimo == "parado") {
    while (partir == "parado" && primeiro == "parado") {
      posicao1();
    }
    bloqueio();
    while (partir == "parado" && segundo == "parado") {
      posicao2();
    }
    bloqueio();
    while (partir == "parado" && terceiro == "parado") {
      posicao3();
    }
    bloqueio();
    while (partir == "parado" && quarto == "parado") {
      posicao4();
    }
    bloqueio();
    while (partir == "parado" && quinto == "parado") {
      posicao5();
    }
    bloqueio();
    while (partir == "parado" && sexto == "parado") {
      posicao6();
    }
    bloqueio();
    while (partir == "parado" && setimo == "parado") {
      posicao7();
    }
    bloqueio();
    while (partir == "parado" && oitavo == "parado") {
      posicao8();
    }
    bloqueio();
    while (partir == "parado" && nono == "parado") {
      posicao9();
    }
    bloqueio();
    while (partir == "parado" && decimo == "parado") {
      posicao10();
    }
    bloqueio();
  }
  while (partir == "parado") {
    if (analogRead(A0) > 300 && analogRead(A0) <= 600) {
      partir = "movimento";

    }
    delay(10);
    if (analogRead(A0) <= 1000) {
      Serial.println("Sem memoria");

    }
    delay(10);
    Serial.println("Agradando start");
  }
  sequencia = primeiro;
  leitura();
  delay(200);
  sequencia = segundo;
  leitura();
  delay(200);
  sequencia = terceiro;
  leitura();
  delay(200);
  sequencia = quarto;
  leitura();
  delay(200);
  sequencia = quinto;
  leitura();
  delay(200);
  sequencia = sexto;
  leitura();
  delay(200);
  sequencia = setimo;
  leitura();
  delay(200);
  sequencia = oitavo;
  leitura();
  delay(200);
  sequencia = nono;
  leitura();
  delay(200);
  sequencia = decimo;
  leitura();
  delay(200);
  Serial.println(primeiro);
  Serial.println(segundo);
  Serial.println(terceiro);
  Serial.println(quarto);
  Serial.println(quinto);
  Serial.println(sexto);
  Serial.println(setimo);
  Serial.println(oitavo);
  Serial.println(nono);
  Serial.println(decimo);
  primeiro = "parado";
  segundo = "parado";
  terceiro = "parado";
  quarto = "parado";
  quinto = "parado";
  sexto = "parado";
  setimo = "parado";
  oitavo = "parado";
  nono = "parado";
  decimo = "parado";
  partir = "parado";
  delay(1000);

}
