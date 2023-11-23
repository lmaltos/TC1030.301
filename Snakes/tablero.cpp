#include "tablero.h"

tablero::tablero() {
    for (int i = 0; i < casillas; i++) {
        casilla[i] = 'N';
    }
    // Se indican cuales casillas son escalera
    casilla[12] = 'E';
    casilla[18] = 'E';
    casilla[25] = 'E';
    // Se indican cuales casillas son serpiente
    casilla[13] = 'S';
    casilla[20] = 'S';
    casilla[29] = 'S';
}

int tablero::movimiento(int pos) {
    if (casilla[pos] == 'S') {
        return pos - 3;
    }
    else if (casilla[pos] == 'E') {
        return pos + 3;
    }
    return pos;
}

dado* tablero::getDado() {
    return D;
}

void tablero::setDado(dado &myDado) {
    D = &myDado;
}

int tablero::getCasillas() {
    return casillas;
}

char tablero::getCasilla(int pos) {
    return casilla[pos-1];
}

char tablero::operator[](int pos) {
    return casilla[pos-1];
}

int tablero::getTurnoActual() {
    return turnoActual;
}

void tablero::cambiarTurno() {
    turnoActual++;
}

bool tablero::turnosDisponibles(){
    return (turnoActual < maximoTurnos);
}