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

//    int x=1, base, exponente;
//    double resultado=0;

//    cout << "Ingrese la base: ";
//    cin >> base;

//    cout << "Ingrese el exponente: ";
//    cin >> exponente;

//    if (exponente==1){
//        resultado=base;
//    }

//    if (exponente==0){
//        resultado=1;
//    }

//    if (exponente==0 && base==0){
//        cout<<"Hay una indeterminacion.";
//    }

//    while (x<exponente){

//        if (resultado<base){
//            resultado=base*base;
//        }

//        else{
//            resultado=resultado*base;
//        }

//        x++;
//    }

//    if (exponente==0 && base==0){

//    }
//    else {
//        cout << "El resultado es: " << resultado << endl;
//    }

    //Ejercicio 8

//    int N;
//    cout << "Ingrese el numero al que le desea sacar el factorial: ";
//    cin >> N;
//    int M=N;

//    int fact=1;

//    while(N>0){
//        fact = fact*N;
//        N=N-1;
//    }

//    cout<<M<<"!: "<<fact<<endl;

    // Ejercicio 10

//    int N;
//    cout<<"Ingrese el numero al que desea sacar los multiplos: ";
//    cin>>N;

//    int cont=N;

//    cout<<"Los multiplos de "<<N<<" hasta el 100 son: "<<endl;
//    while (cont<=100){
//        if (cont%N==0){
//            cout<<cont<<endl;
//        }
//        cont=cont+1;
//    }

    // Ejercicio 12

//    int N,cont=1,potencia;
//    cout <<"Ingrese el numero al que desea crear su tabla de potencias: ";
//    cin>>N;

//    cout<<endl<<"Tabla de potencias:"<<endl;
//    while(cont<=5){
//        potencia=pow(N,cont);
//        cout<<N<<"^"<<cont<<"="<<potencia<<endl;
//        cont+=1;
//    }

    // Ejercicio 14 - imprime números en desorden después del 45 y del 6

//    int cont1=1, cont2=50;
//    cout<<"Tabla paralela:"<<endl;

//    while (cont1<51 && cont2>0){
//        cout<<cont1<<"\t\t"<<cont2<<endl;
//        cont1+=1;
//        cont2-=1;
//    }

    //Ejercicio 16 - agregar verificación para cuando son letras

//    int N,prom=0, cont=0;
//    cout<<"Ingrese un numero: ";
//    cin>>N;

//    while(N!=0){
//        prom=prom+N;
//        cout<<"Ingrese un numero: ";
//        cin>>N;
//        cont+=1;

//    }
//    cout<<"El promedio es: "<<prom/cont<<endl;

    //Ejercicio 18 - agregar verificación para cuando son letras

//    int N, cont=1;
//    cout<<"Ingrese el numero que desea ver si es cuadrado perfecto"<<endl;
//    cin>>N;

//    while(cont<N){
//        if(cont*cont==N){
//            cout<<"El numero ingresado es cuadrado perfecto"<<endl;
//            break;
//            }
//        else{
//            cont+=1;
//            }

//    }
//    if(cont*cont!=N){
//        cout<<"El numero ingresado no es cuadrado perfecto"<<endl;
//    }

    //Ejercicio 20 - agregar verificación para cuando son letras

//    int N , aux, N2=0;
//    cout<<"Ingrese el numero que desea ver si es palindromo:"<<endl;
//    cin>>N;
//    aux=N;

//    while (N!=0) {
//        N2=N2*10+N%10;
//        N=N/10;
//    }

//    if (aux==N2) {
//        cout<<"El numero "<< aux <<" es palindromo.";
//    }
//    else {
//        cout<<"El numero "<< aux <<" no es palindromo.";
//    }

    //Ejercicio 22

//    int N, horas, minutos, segundos;
//    cout<<"Ingrese una cantidad entera de segundos :"<<endl;
//    cin>>N;

//    horas=(N/60)/60;
//    minutos=(N/60)%60;
//    segundos=N%60;

//    cout<<"Es equivalente a (h/m/s) "<<horas<<":"<<minutos<<":"<<segundos;

    //Ejercicio 24 - queda un espacio movido e imprime un asterisco más haca abajo

//    int n;
//    cout<<"Ingrese un numero para dibujarle un cuadrado:"<<endl;
//    cin>>n;

//    if (n>= 0 && n<=20) {
//        //Linea superior
//        for (int i = 0; i < n; i++) {
//            cout<<"+  ";
//        }
//        cout<<" "<<endl;

//        //Centro de la forma
//        for(int i = 0; i < (n-2)+0.6; i++) {
//            cout<<("+");
//        for(int j = 0; j < (n-2)+0.6; j++) {
//            cout<<("   ");
//        }
//        cout<<("+")<<endl;
//        }

//        //Linea inferior
//        for(int i = 0; i < n; i++) {
//            cout<<("+  ");
//        }
//        cout<<endl;
//        }
//        else {
//            cout<<endl<<"Error. El dato a ingresar debe estar entre 0 y 20";
//        }


    //Ejercicio 26

//    int lado1=0,lado2=0,lado3=0;

//    cout<<"Ingrese los valores de 3 lados de un triangulo: "<<endl;
//    cout<<"Primer lado del triangulo: "<<endl;
//    cin>>lado1;
//    cout<<"Segundo lado del triangulo: "<<endl;
//    cin>>lado2;
//    cout<<"Tercer lado del triangulo: "<<endl;
//    cin>>lado3;

//    if((abs(lado1 - lado3) < lado2) && (lado2 < (lado1 + lado3))) {

//        if(lado1==lado2 && lado1==lado3){
//            cout<<"Se forma un triangulo equilatero, porque sus lados son: "<<lado1<<", "<<lado2<<", "<<lado3<<endl;
//        }

//        else if((lado1==lado2 && lado1!=lado3) || (lado1==lado3 && lado1!=lado2) || (lado2==lado3 && lado2!=lado1)){
//            cout<<"Se forma un triangulo isosceles, porque sus lados son: "<<lado1<<", "<<lado2<<", "<<lado3<<endl;
//        }

//        else if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
//            cout<<"Se forma un triangulo escaleno, porque sus lados son: "<<lado1<<", "<<lado2<<", "<<lado3<<endl;
//        }
//    }
//    else{
//        cout<<"Los valores ingresados no corresponden a los lados de un triangulo. "<<endl;
//    }

    //Ejercicio 28

//    float n, aux=3, pi=0;

//    cout<<"Ingrese la cantidad de terminos para aproximar pi: "<<endl;
//    cin>>n;

//    for(int i=1;i<n;i++){
//        if(i%2==1){
//            pi=pi+(-1/aux);
//            aux=aux+2;
//        }

//        if(i%2==0){
//            pi=pi+(1/aux);
//            aux=aux+2;
//        }
//    }
//    pi=pi+1;
//    pi=pi*4;

//    cout<<"Pi (π) es aproximadamente: "<<pi<<endl;

    //Ejercicio 30

//    int n = 0, n2=0, cont=0, limite_inferior=0, limite_superior=100;
//    bool aux=false;

//    srand(time(NULL));
//    cout<<"Adivine un numero a continuacion, el programa le indicara si el numero secreto es menor, mayor o igual al que usted ingresa "<<endl;

//    n = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);

//    while(aux==false){
//        cout<<"Ingrese un numero: ";
//        cin>>n2;

//        if(n<n2){
//            cout<<n2<<" Es mayor, siga intentando"<<endl<<endl;
//            cont++;
//        }
//        else if(n>n2){
//            cout<<n2<<" Es menor, siga intentando"<<endl<<endl;
//            cont++;
//        }
//        else if(n==n2){
//            cout<<"¡Ese es el numero! El numero secreto era: "<<n<<endl<<endl;
//            aux=true;
//        }
//    }

//    cout<<"Tuvo que realizar "<<cont<<" intentos para adivinar el numero secreto."<<endl;

//    //Problema 2

//    int lista[]={50000,20000,10000,5000,2000,1000,500,200,100,50,0},dinero,aux;

//    cout<<"Ingrese el dinero: ";cin>>dinero;
//    aux=dinero;

//    for(int i=0;lista[i]!=0;i++){
//        dinero=aux/lista[i];
//        aux=aux%lista[i];
//        cout<<lista[i]<<": "<<dinero<<endl;

//    }
//    if(aux>0)cout<<"Faltante: "<<aux<<endl;
//    else cout<<"Faltante: "<<aux<<endl;

    //Problema 4
//    bool ban=true;
//    int tiempo1=0, horas1=0, minutos1=0, tiempo2=0, horas2=0, minutos2=0, horas_salida=0, minutos_salida=0;
//    while (ban){
//        cout<<"Ingrese una hora (sin puntos ni caracteres): ";
//        cin>>tiempo1;
//        minutos1=tiempo1%100;
//        horas1=tiempo1/100;
//        if (tiempo1<=2359 && minutos1<60 && tiempo1>=0){
//            ban=false;
//        }
//        else{
//            cout<<"\nLa hora ingresada es inválida, intente nuevamente: "<<endl;
//        }
//    }
//    ban=true;
//    while (ban){
//        cout<<"\nIngrese el tiempo que desea adicionar: ";
//        cin>>tiempo2;
//        minutos2=tiempo2%100;
//        horas2=tiempo2/100;
//        if (tiempo2<=2359 && minutos2<60 && tiempo2>=0){
//            ban=false;
//        }
//        else{
//            cout<<"\nLa hora ingresada es inválida, intente nuevamente: "<<endl;
//        }

//    }
//    minutos_salida=minutos1+minutos2;
//    if(minutos_salida>59){
//        minutos_salida-=60;
//        horas1+=1;
//    }
//    horas_salida=horas1+horas2;
//    if (horas_salida>23){
//        horas_salida-=24;
//    }
//    if (horas_salida==0){
//        cout<<"00";
//    }
//    horas_salida=(horas_salida*100)+minutos_salida;
//    cout<<"\nLa hora es: "<<horas_salida<<endl;

    // Problema 6

//    int num_terminos=0;
//       cout<<"Ingrese la cantidad de terminos para aproximar e: ";
//       cin>>num_terminos;
//       int multp=1, cont=1;
//       float aux1=1, aux2=1, total2=0, total1=1;
//       while (cont<num_terminos){
//           aux2*=multp;
//           total2=aux1/aux2;
//           multp+=1;
//           total1+=total2;
//           cont+=1;
//       }
//       cout<<"\n"<<total1<<endl;

    // Problema 8

//    int A=0, B=0, N=0;
//    int cont=1, multp=0, suma=0;
//    cout<<"Ingrese el primer numero: ";
//    cin>>A;
//    cout<<"\nIngrese el segundo numero: ";
//    cin>>B;
//    cout<<"\nIngrese el numero del cual tienen que ser menor sus multiplos: ";
//    cin>>N;
//    multp= A*cont;
//    while (multp<N){
//        suma+=multp;
//        cout<<multp;
//        cont+=1;
//        multp= A*cont;
//        if (multp<N){
//            cout<<" + ";
//        }

//    }
//    cont=1;
//    multp= B*cont;
//    if ((suma!=0)&&(multp<N)&&(multp%A!=0)){
//        cout<<" + ";
//    }
//    if ((multp<N)&&(multp%A!=0)){
//        cout<<multp;
//        suma+=multp;
//        cont+=1;
//    }
//    multp= B*cont;
//    while (multp<N){
//        if (multp%A!=0){
//            suma+=multp;
//            cout<<" + "<<multp;
//        }
//        cont+=1;
//        multp= B*cont;
//    }
//    cout<<"\n = "<<suma<<endl;

    // Problema 10

//    int N=0;
//    cout<<"Ingrese la posicion del numero primo que desea visualizar: ";
//    cin>>N;
//    int divisor=2, cont1=2, cont2=1;
//    while (divisor<=cont1){
//        if (cont1%divisor==0){
//            if (divisor==cont1){
//                if (N==cont2){
//                    cout<<cont1<<endl;
//                    break;

//                }
//                else{
//                    cont1+=1;
//                    divisor=2;
//                    cont2+=1;
//                }
//            }
//            else{
//                cont1+=1;
//                divisor=2;
//            }
//        }
//        else{
//            divisor+=1;
//        }
//    }

    // Problema 12

//    int N=0;
//    cout<<"Ingrese el numero N del cual busca el maximo factor primo: ";
//    cin>>N;
//    int contp=2, fa=0, contd=2;
//    while (contp<=N){
//        if (contp%contd==0){
//            if (contd==contp){
//                if (N%contp==0){
//                    fa=contp;
//                    contd=2;
//                    contp+=1;
//                }
//                else{
//                    contd=2;
//                    contp+=1;
//                }

//            }
//            else{
//                contp+=1;
//                contd=2;
//            }
//        }
//        else{
//            contd+=1;
//        }

//    }
//    cout<<fa<<endl;

    // Problema 14

//    int pn=100, sn=100, resul=0, aux=0, sf=0, r=0, mp=0, mpn=0, spn=0;
//    while (pn<1000){
//        while (sn<1000){
//            resul=pn*sn;
//            aux=resul;
//            while (aux!=0){
//                r=aux%10;
//                aux/=10;
//                sf=(sf*10)+r;
//            }
//            if (sf==resul){
//                if (resul>mp){
//                    mp=resul;
//                    mpn=pn;
//                    spn=sn;
//                }
//            }
//            sf=0;
//            sn+=1;
//        }
//        pn+=1;
//        sn=pn;
//    }
//    cout<<mpn<<" * "<<spn<<" = "<<mp<<endl;

    // Problema 16

//    int N=0;
//    cout<<"Ingrese el numero N, del cual van a partir las semillas: ";
//    cin>>N;
//    int resul=0, contr=1, semilm=0, contm=0;
//    for(int i=N; i>1 ;i--){
//        while (N!=1){
//            if (N%2==0){
//                N/=2;
//                contr+=1;
//            }
//            else if (N%2!=0){
//                N=(N*3)+1;
//                contr+=1;
//            }
//        }
//        if (contr>contm){
//            contm=contr;
//            semilm=i;
//        }
//        N=i-1;
//        contr=1;
//    }
//    cout<<"La serie mas larga es con la semilla "<<semilm<<" teniendo "<<contm<<" terminos"<<endl;



    return 0;


}
