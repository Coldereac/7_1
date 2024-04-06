#include "functions.h"

float f(float x) {
    return x * x - 4;
}

float squareMethod(float a, float b) {
    float s = (a + b) / 2;
    if(fabsf(a - b) < E) {
        return s;
    }
    if(f(s) * f(a) < 0) {
        return squareMethod(a, s);
    } else {
        return squareMethod(s, b);
    }
}