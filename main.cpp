#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
#include "myClase.h"

using namespace std;

void operacionesBasicas() {
    // tipos de variables
    int a,b;
    string str;
    char c;
    float d;
    bool t;
    double x,y,z;

    // output/input a consola
    cout << "Hello World" << endl;
    //cout << "Your name: ";
    //cin >> str;
    //cout << "Hello " << str << endl;

    // operaciones aritmeticas basicas
    // Suma
    cout << "Suma" << endl;
    a = 5;
    cout << "a = " << a << endl;
    b = 11;
    cout << "b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    // Resta
    cout << "Resta" << endl;
    d = 3.14;
    cout << "d = " << d << endl;
    cout << "a - d = " << a - d << endl;
    // Multiplicacion
    cout << "Multiplicacion" << endl;
    cout << "a * b = " << a * b << endl;
    // Elevar al cuadrado
    cout << "Elevar al cuadrado" << endl;
    cout << "a^2 = " << pow(a,2) << endl;
    // Division
    cout << "Division" << endl;
    cout << "b/a = " << b/a << endl;
    cout << "a/d = " << a/d << endl;
    // Raiz
    cout << "Raiz" << endl;
    cout << "sqrt(d) = " << sqrt(d) << endl;
    cout << "pow(d,0.5) = " << pow(d,0.5) << endl;
    // Modulo
    cout << "Modulo" << endl;
    cout << "b % a = " << b % a << endl;
}

// Operaciones con strings
void operacionesString(){
    string str1 = "Hola", str2 = "Mundo", str3;
    cout << str1 << endl;
    str3 = str1 + " " + str2;
    cout << str3 << endl;
}

void arreglos() {
    int A[100];
    for (int i = 0; i < 100; i++) {
        A[i] = 0; // limpiamos el arreglo incial
    }
    A[0] = 1;
    A[1] = 3;
    A[64] = 100;
    for (int i = 1; i < 100; i*=2) {
        cout << "A[" << i <<"] = " << A[i] << endl;
    }

    int B[10][10];
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++){
            B[i][j] = rand() % 100;
        }
    }
    cout << "Matriz aleatoria" << endl;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

}

void ciclos() {
    bool condicion = true;
    bool final_de_archivo = true;
    while (condicion) {
        if (final_de_archivo)
            condicion = false;
            // ejemplo de usos
            // - lectura de archivo
    }

    do {
        // ejemplo de usos
        // - login
    } while (condicion);
}

void manejoArchivos();

int Max(int,int,int);

int main() {
    //srand(time(0)); // semilla aleatoria
    //arreglos();
    //Max(123,23,345);
    //manejoArchivos();
    myClase obj,obj2(100);
    myClase A[10][10];
    cout << "obj: ";
    obj.myMethod();
    cout << "obj2: ";
    obj2.myMethod();

    obj.setA(5);
    obj.setB(6);
    obj.setX(3.14);
    obj.swap();
    obj.myMethod();

    obj2.setB(5);
    obj2.myMethod();
}

int Max(int a, int b, int c) {
    if (a >= c) {
        if (a >= b) {
            return a;
        }
        else {
            return b;
        }
    }
    else {
        if (c >= b) {
            return c;
        }
        return b;
    }
}

void manejoArchivos() {
    ofstream archivoSalida;
    ifstream archivoEntrada;
    fstream archivo;
    archivoSalida.open("archivoSalida.txt"); // abrir y sobreescribir
    //archivoSalida.open("archivoSalida.txt",ios_base::app); // abrir y agregar
    archivoSalida << "Raiz" << endl;
    archivoSalida << "sqrt(d) = " << "sqrt(d)" << endl;
    archivoSalida << "pow(d,0.5) = " << "pow(d,0.5)" << endl;
    archivoSalida.close();

    archivoEntrada.open("entrada.txt");
    int n;
    while (!archivoEntrada.eof()) {
        archivoEntrada >> n;
        cout << n << endl;
    }
    archivoEntrada.close();
}