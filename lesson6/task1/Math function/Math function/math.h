#pragma once

int sum(int x, int y) {
    return x + y;
}

int diff(int x, int y) {
    return x - y;
}

int mult(int x, int y) {
    return x * y;
}

int divs(int x, int y) {
    return x / y;
}

int exp(int x, int y) {
    int c = 1;
    for (int i = 0; i < y; i++) {
       c *= x;
    }
    return c;
}

