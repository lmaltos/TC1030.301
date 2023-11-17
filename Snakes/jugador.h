#ifndef JUGADOR_H
#define JUGADOR_H
#include "tablero.h"

class jugador {
  private:
    int id;
    int posicion = 1;
  public:
    jugador(int);
    void jugar(tablero&);
    void setPosicion(int);
};

#endif