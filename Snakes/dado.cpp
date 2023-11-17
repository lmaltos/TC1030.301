#include "dado.h"
#include <cstdlib>

dado::dado(int _caras = 6) {
    caras = _caras;
    srand(100); // semilla aleatoria
}

int dado::roll() {
    int n = rand() % caras; // 0,1,2,...,caras - 1
    return n + 1; // 1,2,3,...,caras
}