//#include <iostream>

//using namespace std;

//int main() {
//    string cadena;
//    cout << "Ingrese cadena: " << endl;
//    cin >> cadena;
//    int l = cadena.size();

//    cout << "Original: " << cadena << endl;

//    for (int i = 0; i < l; i++) {
//        cadena[i] = toupper(cadena[i]); //Vuelve los elementos a mayuscula
//    }

//    cout << "En mayuscula: " << cadena << endl;
//    return 0;
//}


//Arduino:

//void setup() {
//  Serial.begin(9600);
//  Serial.println("\nIngrese cadena");
//}

//void loop() {
//  while (Serial.available() > 0) {
//    String cadena;
//    cadena = Serial.readStringUntil('\n');
//    int l = cadena.length();

//    Serial.print("Original: ");
//    Serial.print(cadena);

//    for (int i = 0; i < l; i++) {
//      cadena[i] = toupper(cadena[i]);
//    }

//    Serial.print("\nEn mayuscula: ");
//    Serial.println(cadena);
//  }
//}
