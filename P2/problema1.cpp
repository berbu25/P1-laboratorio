//void setup() {
//  Serial.begin(9600);
//  Serial.println("Ingrese un valor.");
//}

//void loop() {
//  String input;
//  long int N;

//  while (!Serial.available()) {
//    // Espera a que esté disponible una entrada desde el monitor serie
//  }

//  input = Serial.readStringUntil('\n'); // Lee la entrada del usuario
//  input.trim(); // Elimina espacios en blanco al principio y al final

//  N = input.toInt(); // Convierte la entrada en un número entero

//  if (N >= 0) {
//    long int b50, b20, b10, b5, b2, b1, m500, m200, m100, m50;

//    // Cálculos para calcular billetes y monedas
//    b50 = N / 50000;
//    N %= 50000;

//    b20 = N / 20000;
//    N %= 20000;

//    b10 = N / 10000;
//    N %= 10000;

//    b5 = N / 5000;
//    N %= 5000;

//    b2 = N / 2000;
//    N %= 2000;

//    b1 = N / 1000;
//    N %= 1000;

//    m500 = N / 500;
//    N %= 500;

//    m200 = N / 200;
//    N %= 200;

//    m100 = N / 100;
//    N %= 100;

//    m50 = N / 50;
//    N %= 50;

//    // Muestra los resultados en el monitor serie
//    Serial.print("50.000->");
//    Serial.println(b50);
//    Serial.print("20.000->");
//    Serial.println(b20);
//    Serial.print("10.000->");
//    Serial.println(b10);
//    Serial.print("5.000->");
//    Serial.println(b5);
//    Serial.print("2.000->");
//    Serial.println(b2);
//    Serial.print("1.000->");
//    Serial.println(b1);
//    Serial.print("500->");
//    Serial.println(m500);
//    Serial.print("200->");
//    Serial.println(m200);
//    Serial.print("100->");
//    Serial.println(m100);
//    Serial.print("50->");
//    Serial.println(m50);
//    Serial.println("Sobrante");
//    Serial.println(N);
//    Serial.println("Ingrese un valor.");
//  } else {
//    Serial.println("Error: El número debe ser mayor o igual a cero.");
//    Serial.println("Ingrese un valor válido.");
//  }
//}
