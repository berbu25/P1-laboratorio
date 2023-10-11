////#include <iostream>
////#include <string>

////using namespace std;

////int main() {
////    int suma = 0, N = 0, aux = 0, x = 0;
////    string cadena;

////    cout << "Ingrese numero romano: " << endl;
////    cin >> cadena;

////    int l = cadena.size(); //Mira el tamaño

////    for (int i = 0; i < l; i++) {
////        N = toupper(cadena[i]); //Pasa a mayuscula

////        if (N == 77) {   // M en ASCII
////            x = 1000;
////            suma = suma + x;
////        }
////        else if (N == 68) { // D
////            x = 500;
////            suma = suma + x;
////        }
////        else if (N == 67) { // C
////            x = 100;
////            suma = suma + x;
////        }
////        else if (N == 76) {
////            x = 50;
////            suma = suma + x;
////        }
////        else if (N == 88) {
////            x = 10;
////            suma = suma + x;
////        }
////        else if (N == 86) {
////            x = 5;
////            suma = suma + x;
////        }
////        else if (N == 73) {
////            x = 1;
////            suma = suma + x;
////        }

////        if (x > aux) {
////            suma = suma - 2 * aux;
////        }
////        aux = x;
////    }

////    cout << "El numero ingresado fue: " << cadena << endl;
////    cout << "Que corresponde a: " << suma << "." << endl;

////    return 0;
////}

//////Arduino:

//void setup() {
//  Serial.begin(9600);
//  Serial.println("Ingrese un numero romano");
//}

//void loop() {
//  int suma = 0, N = 0, aux = 0, x = 0;
//  String cadena;

//  if (Serial.available()) {
//    cadena = Serial.readStringUntil('\n');
//    int l = cadena.length();

//    for (int i = 0; i < l; i++) {
//      N = toupper(cadena[i]);

//      if (N == 77) {   // M
//        x = 1000;
//        suma = suma + x;
//      }
//      else if (N == 68) { // D
//        x = 500;
//        suma = suma + x;
//      }
//      else if (N == 67) { // C
//        x = 100;
//        suma = suma + x;
//      }
//      else if (N == 76) {
//        x = 50;
//        suma = suma + x;
//      }
//      else if (N == 88) {
//        x = 10;
//        suma = suma + x;
//      }
//      else if (N == 86) {
//        x = 5;
//        suma = suma + x;
//      }
//      else if (N == 73) {
//        x = 1;
//        suma = suma + x;
//      }

//      if (x > aux) {
//        suma = suma - 2 * aux;
//      }
//      aux = x;
//    }

//    Serial.print("El numero ingresado fue: ");
//    Serial.println(cadena);
//    Serial.print("Que corresponde a: ");
//    Serial.print(suma);
//  }
//}


