#ifndef FIXED_POINT_ARITHMETIC_H
#define FIXED_POINT_ARITHMETIC_H

#include <inttypes.h>

#define f 0b00000000000000000100000000000000
int n_to_fixed(int n) {
    return n * f;
}

int x_to_int_zero(int x) {
    return x / f;
}

int x_to_int_near(int x) {
    if(x >= 0) {
        return (x + f/2) / f;
    }
    else {
        return (x - f/2) / f;
    }
}

int add_x_y(int x, int y) {
    return x + y;
}

int sub_x_y(int x, int y) {
    return x - y;
}

int add_x_n(int x, int n) {
    return x + n * f;
}

int sub_x_n(int x, int n) {
    return x - n * f;
}

int mul_x_y(int x, int y) {
    return ((int64_t) x) * y / f;
}

int mul_x_n(int x, int n) {
    return x * n;
}

int div_x_y(int x, int y) {
    return ((int64_t) x) * f / y;
}

int div_x_n(int x, int n) {
    return x / n;
}

#endif 