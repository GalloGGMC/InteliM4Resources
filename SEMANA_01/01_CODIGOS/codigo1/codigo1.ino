const float pi = 3.1415926;
bool booleano = true; 
const int inteiro = 2;
float area;
float m2;

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("\nCaluladora de area\nQual a figura?\n(circulo, retangulo, triangulo)");
  while(Serial.available() == 0){}
  String figura = Serial.readString();
  Serial.println("Medida 1: (raio ou base)");
  while(Serial.available() == 0){}
  float m1 = Serial.parseFloat();
  if (figura == "retangulo" || figura == "triangulo"){
    Serial.println("Medida 2: (altura)");
    while (Serial.available() == 0){}
    m2 = Serial.parseFloat();
  }
  if (figura == "triangulo"){
    area = m1 * m2 / inteiro;
  } else if (figura == "circulo"){
    
  } else {
    
  }
  Serial.println("A area:");
  Serial.println(area);
}