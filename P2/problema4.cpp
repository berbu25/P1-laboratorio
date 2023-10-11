//#include <iostream>
//#include <string>

//using namespace std;

//int main()
//{
//    int num;
//    cout<<"Ingrese numero: ";
//    string s;
//    cin>>s;
//    num=stoi(s); //Convierte de cadena a int
//    cout<<"El numero es: ";
//    cout<<num<<endl;
//    cout<<"Prueba operacion numero (se suma 10): ";
//    num=num+10;
//    cout<<num<<endl;
//    return num;
//}

//#include <iostream>
//#include <string>

//using namespace std;

//int stringToInt(const string& s, int index = 0, int result = 0)
//{
//    if (index == s.length()) { //Revisa si ya llegó al final
//        return result;
//    }

//    // Convierte el carácter en la posición 'index' a un dígito entero
//    int digit = s[index] - '0'; //Resta el valor 0 de ASCII para la conversión

//    // Aumenta el resultado actual multiplicándolo por 10 y sumándole el dígito
//    result = result * 10 + digit; //Construye el número que va a salir

//    // Llama recursivamente a la función para el siguiente carácter
//    return stringToInt(s, index + 1, result);
//}

//int main()
//{
//    string s;
//    cout << "Ingrese numero: ";
//    cin >> s;

//    int num = stringToInt(s);

//    cout << "El numero es: " << num << endl;

//    cout << "Prueba operacion numero (se suma 10): ";
//    num = num + 10;

//    cout << num << endl;

//    return 0;
//}
