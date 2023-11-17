#include "jugador.h"

jugador::jugador(int _id) {
    id = _id;
}

void jugador::jugar(tablero &T) {
    dado *D = T.getDado();
    int n = D->roll(); // se lanza el dado
    int nuevaPosicion = posicion + n;
    int posicionFinal = T.movimiento(nuevaPosicion);
    char tipoCasilla = T[nuevaPosicion]; // T.getCasilla(nuevaPosicion);
}