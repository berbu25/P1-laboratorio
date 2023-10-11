//#include <iostream>

//using namespace std;

//int main()
//{
//    int A[5][5], B[5][5];


//    //crea la matriz
//    for (int j=0; j<5; j++){
//        for (int k=0; k<5; k++){
//            A[j][k]=j*5+k+1;
//        }
//    }

//    //Imprime la matriz
//    cout<<"\nMatriz inicial:\n"<<endl;
//    for (int j=0; j<5; j++){

//        for (int k=0; k<5; k++){
//            cout<<A[j][k];
//            if (A[j][k]<10){
//                cout<<"  ";
//            }
//            else{
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }



//    //crea la matriz B 90 grados
//    for (int k=4; k>=0; k--){
//        for (int j=0; j<5; j++){
//            B[j][k]=(4-k)*5+j+1;

//        }

//    }
//    cout<<"\nMatriz rotada 90 grados:\n"<<endl;
//    //Imprime la matriz B 90 grados
//    for (int j=0; j<5; j++){

//        for (int k=0; k<5; k++){
//            cout<<B[j][k];
//            if (B[j][k]<10){
//                cout<<"  ";
//            }
//            else{
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }
//    cout<<"\nMatriz rotada 180 grados:\n"<<endl;
//    //Imprime la matriz 180 grados apartir de la matriz original
//    for (int j=4; j>=0; j--){

//        for (int k=4; k>=0; k--){
//            cout<<A[j][k];

//            if (A[j][k]<10){
//                cout<<"  ";
//            }
//            else{
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }

//    cout<<"\nMatriz rotada 270 grados:\n"<<endl;
//    //Imprime la matriz 270 grados apartir de la matriz original
//    for (int k=4; k>=0; k--){

//        for (int j=0; j<5; j++){
//            cout<<A[j][k];

//            if (A[j][k]<10){
//                cout<<"  ";
//            }
//            else{
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }

//    return 0;
//}
