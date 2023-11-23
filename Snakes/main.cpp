#include "tablero.h"
#include "jugador.h"
#include "dado.h"
#include <iostream>

using namespace std;

int main() {
    tablero miTablero;
    jugador j1(1),j2(2),*ganador = nullptr;
    dado miDado(6);
    string turno;

    miTablero.setDado(miDado); // Se asigna el dado al tablero
    // dar instrucciones
    char opcion;
    cout << "Press C to continue next turn, or E to end the game:" << endl;
    do {
        cin >> opcion;
        if (opcion == 'C') {
            turno = j1.jugar(miTablero);
            cout << turno << endl;
            // el jugador 1 ha ganado? detener el juego
            if (j1.haGanado()) {
                ganador = &j1;
                break;
            }
            miTablero.cambiarTurno();

            turno = j2.jugar(miTablero);
            cout << turno << endl;
            // el jugador 2 ha ganado? detener el juego
            if (j2.haGanado()) {
                ganador = &j2;
                break;
            }
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
    if (ganador != nullptr) {
        cout << "Player " << ganador->getID() << " is the winner!!!" << endl;
    }
    if (!miTablero.turnosDisponibles()) {
        cout << "The maximum number of turns has been reached..." << endl;
    }
    return 0;
}