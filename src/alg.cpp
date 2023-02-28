// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double st = 1;
    for (int i = 1; i <= n; i++)
        st *= value;
    return st;
}

uint64_t fact(uint16_t n) {
    uint16_t factor = 1;
    for (int i = 2; i <= n; i++)
        factor *= i;
    return factor;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double sum = 0;
    for (int i = 0; i <= count; i++)
        sum += pown(x, i) / fact(i);
    return sum;
}

double sinn(double x, uint16_t count) {
    int znac = 0;
    double sum = 0;
    for (int i = 1; i <= count * 2-1; i += 2) {
        znac++;
        if (znac % 2 == 0) sum -= pown(x, i) / fact(i);
        else
            sum += pown(x, i) / fact(i);
    }
    return sum;
}

double cosn(double x, uint16_t count) {
    int znac = 0;
    double sum = 0;
    for (int i = 0; i <= count * 2 - 2; i += 2) {
        znac++;
        if (znac % 2 == 0) sum -= pown(x, i) / fact(i);
        else
            sum += pown(x, i) / fact(i);
    }
    return sum;
}
