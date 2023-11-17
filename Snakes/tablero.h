#ifndef TABLERO_H
#define TABLERO_H
#include "dado.h"

class tablero {
  private:
    int casillas = 30;
    char casilla[30];
    dado *D;
    int turnoActual = 1;
    int maximoTurnos = 16;
  public:
    tablero();
    int movimiento(int);
    dado* getDado();
    void setDado(dado&);
    char getCasilla(int);
    char operator[](int);
    int getTurnoActual();
    void cambiarTurno();
    bool turnosDisponibles();
};

#endif