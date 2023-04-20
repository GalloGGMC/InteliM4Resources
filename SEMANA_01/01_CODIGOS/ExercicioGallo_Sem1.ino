void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  Serial.println("Teste de sorte!\nDigite o número a ser checado:");
  while (Serial.available() == 0) {
  }
  int num = Serial.parseInt();
  float res;
  char sla[] = {"yes"};
  bool pare = false;
  if (num%2 == 0){
    num = num % 10;
    res = (num*3)/(num + 7);
  } else {
    num %= 100;
    num -= 12;
    res = 273/num;
  }
  
  if (sla == "yes" && pare == false){
    for (int i = 1; i < 5; i++){
      res *= res;
    }
    pare = true;
  }

  if (res < 1){
    Serial.println("\nEsse número é sortudo\n");
  } else {
    Serial.println("\nEsse número é azarado\n");
  }
  delay(50);
}
