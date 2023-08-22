#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{

    // Ejercicio 2

//    int N;

//    cout << "Ingrese un numero: ";
//    cin >> N;

//    if(N%2==0){
//        cout << N <<" es par" << endl;

//    }

//    else{
//        cout << N << " es impar"<< endl;

//    }

    // Ejercicio 4

//    int A,B;
//    cout << "Ingrese un numero: ";
//    cin >> A;

//    cout << "Ingrese otro numero: ";
//    cin >> B;

//    if(A>B){
//        cout << "El menor es " << B << endl;
//    }

//    else if(A==B){
//        cout << "Ambos numeros son iguales." << endl;
//    }

//    else {
//        cout <<"El menor es: " << A << endl;
//    }

    // Ejercicio 6

    int x=1, base, exponente;
    double resultado=0;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    if (exponente==1){
        resultado=base;
    }

    if (exponente==0){
        resultado=1;
    }

    if (exponente==0 && base==0){
        cout<<"Hay una indeterminacion.";
    }

    while (x<exponente){

        if (resultado<base){
            resultado=base*base;
        }

        else{
            resultado=resultado*base;
        }

        x++;
    }

    if (exponente==0 && base==0){

    }
    else {
        cout << "El resultado es: " << resultado << endl;
    }
    return 0;


}
