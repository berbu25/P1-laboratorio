//#include <iostream>
//#include <vector>
//#include <algorithm>

//using namespace std;

//// Función para calcular el factorial
//unsigned long long factorial(int n) {
//    unsigned long long resultado = 1;
//    for (int i = 1; i <= n; ++i) {
//        resultado *= i;
//    }
//    return resultado;
//}

//// Función para encontrar la enésima permutación lexicográfica
//string enesimaPermutacion(int n, int digits) {
//    string resultado;
//    vector<int> numeros;
//    for (int i = 0; i <= digits; ++i) {
//        numeros.push_back(i); //Se llena el vector con los números
//    }

//    while (digits >= 0) {
//        unsigned long long fact = factorial(digits); //Calcula el factorial de digits (9)
//        int index = (n - 1) / fact; //Calcula index
//        resultado += to_string(numeros[index]); //Número de index que se le agrega al resultado
//        numeros.erase(numeros.begin() + index); //Lo sustrae
//        n = n - index * fact; //Se ajusta n para hallar la siguiente permutación
//        --digits;
//    }

//    return resultado;
//}

//int main() {
//    int n;
//    cout << "Ingrese el valor de n: ";
//    cin >> n;

//    if (n < 1 || n > factorial(10)) {
//        cout << "El valor de n debe estar entre 1 y " << factorial(10) << endl;
//    } else {
//        string permutacionN = enesimaPermutacion(n, 9);
//        cout << "La permutación lexicográfica enésima es: " << permutacionN << endl;
//    }

//    return 0;
//}
