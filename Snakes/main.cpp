#include "tablero.h"
#include "jugador.h"
#include "dado.h"
#include <iostream>

using namespace std;

int main() {
    tablero miTablero;
    jugador j1(1),j2(2);
    dado miDado(6);

    miTablero.setDado(miDado); // Se asigna el dado al tablero
    // dar instrucciones
    char opcion;
    cout << "Press C to continue next turn, or E to end the game:" << endl;
    do {
        cin >> opcion;
        if (opcion == 'C') {
            j1.jugar(miTablero);
            miTablero.cambiarTurno();
            j2.jugar(miTablero);
            miTablero.cambiarTurno();
        }
        else if (opcion == 'E') {
            cout << "Thanks for playing!!!" << endl;
            break; // salimos del ciclo do while
        }
        else {
            cout << "Invalid option, please press C to continue next turn or E to end the game" << endl;
        }
    } while (miTablero.turnosDisponibles());
    
    return 0;
}