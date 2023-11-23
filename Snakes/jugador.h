#ifndef JUGADOR_H
#define JUGADOR_H
#include "tablero.h"
#include <string>

class jugador {
  private:
    int id;
    int posicion = 1;
    bool gano = false;
  public:
    jugador(int);
    std::string getID();
    std::string jugar(tablero&);
    void setPosicion(int);
    bool haGanado();
};

#endif