struct a {int a; int b} f (int a, int b) {
    struct a d;
    d.a = a;
    d.b = b;
    return d;
}

int integer_variable = 0;
__typeof__(integer_variable) c (int d) {
    return d;
}

