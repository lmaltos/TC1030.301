#include "jugador.h"
#include <string>

jugador::jugador(int _id) {
    id = _id;
}

std::string jugador::getID() {
    return std::to_string(id);
}

void jugador::setPosicion(int posicionNueva) {
    posicion = posicionNueva;
}

bool jugador::haGanado(){
    return gano;
}

std::string jugador::jugar(tablero &T) {
    dado *D = T.getDado();
    std::string ans;
    // Tuno
    ans = std::to_string(T.getTurnoActual()) + " ";
    // Jugador
    ans += std::to_string(id) + " ";
    // casilla inicial
    ans += std::to_string(posicion) + " ";
    // valor dado
    int n = D->roll(); // se lanza el dado
    ans += std::to_string(n) + " ";
    // tipo casilla en la que cae
    int nuevaPosicion = posicion + n;
    if (nuevaPosicion >= T.getCasillas()) {
        nuevaPosicion = T.getCasillas(); // se regresa a la ultima casilla
        // ha ganado el jugador
        gano = true;
    }
    std::string tipoCasilla(1,T[nuevaPosicion]); // T.getCasilla(nuevaPosicion);
    ans += tipoCasilla + " ";
    // casilla final
    int posicionFinal = T.movimiento(nuevaPosicion);
    ans += std::to_string(posicionFinal);
    setPosicion(posicionFinal); // actualizamos la posicion del jugador
    return ans;
}