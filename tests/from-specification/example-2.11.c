int f(int x);
int g(int x);
//@ requires p == &f || p == &g;
void h(int(*p)(int)) {
    
}