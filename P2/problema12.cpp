//#include <iostream>
//#include <cctype>
//#include <limits>  // Agrega esta línea para resolver el error

//using namespace std;

//void CreaMatriz();
//void ImprimeMatriz(int **, int);
//bool VerificaCuadroMagico();

//int **Matriz;
//int N;

//int main() {
//    CreaMatriz();

//    ImprimeMatriz(Matriz, N);

//    if (VerificaCuadroMagico()) {
//        cout << "Es un cuadrado magico" << endl;
//    } else {
//        cout << "No es un cuadrado magico" << endl;
//    }

//    for (int i = 0; i < N; i++) {
//        delete[] Matriz[i];
//    }
//    delete[] Matriz;
//    return 0;
//}

//void CreaMatriz() {
//    cout << "Ingrese la dimension de la matriz cuadrada: ";
//    cin >> N;

//    // Validación para asegurar que se ingrese un número
//    while (cin.fail() || N <= 0) { //validación de caracter o numero <0
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cout << "Entrada invalida. Por favor, ingrese un numero positivo: ";
//        cin >> N;
//    }

//    Matriz = new int *[N];

//    for (int i = 0; i < N; i++) {
//        Matriz[i] = new int[N];
//    }
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cout << "Ingrese coordenada [" << i << "][" << j << "]: ";

//            // Validación para asegurar que se ingrese un número
//            while (!(cin >> Matriz[i][j])) {
//                cin.clear();
//                cin.ignore(numeric_limits<streamsize>::max(), '\n');
//                cout << "Entrada invalida. Por favor, ingrese un numero: ";
//            }
//        }
//    }
//}

//void ImprimeMatriz(int **Matriz, int N) {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cout << Matriz[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

//bool VerificaCuadroMagico() {
//    int sumaDiagonalPrincipal = 0;
//    int sumaDiagonalSecundaria = 0;

//    for (int i = 0; i < N; i++) {
//        sumaDiagonalPrincipal += Matriz[i][i];
//        sumaDiagonalSecundaria += Matriz[i][N - i - 1];
//    }

//    if (sumaDiagonalPrincipal != sumaDiagonalSecundaria) {
//        return false;
//    }

//    int sumaDiagonal = sumaDiagonalPrincipal;

//    for (int i = 0; i < N; i++) {
//        int sumaFila = 0;
//        int sumaColumna = 0;

//        for (int j = 0; j < N; j++) {
//            sumaFila += Matriz[i][j];
//            sumaColumna += Matriz[j][i];
//        }

//        if (sumaFila != sumaDiagonal || sumaColumna != sumaDiagonal) {
//            return false;
//        }
//    }

//    return true;
//}
