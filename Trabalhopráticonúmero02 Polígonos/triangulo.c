#include "triangulo.h"
#include <math.h>

float AreaTriangulo(Ponto A, Ponto B, Ponto C) {
    return fabs(0.5 * ((A.X * (B.Y - C.Y)) + (B.X * (C.Y - A.Y)) + (C.X * (A.Y - B.Y))));
}
