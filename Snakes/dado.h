#ifndef DADO_H
#define DADO_H

class dado {
  private:
    int caras;
  public:
    dado(int);
    int roll(); // lanzar el dado
};

#endif