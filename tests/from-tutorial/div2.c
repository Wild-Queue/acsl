int f(int a){
    int x, y;
    int sum, result;
    if (a == 0){
        x = 0; y = 5;
    } else {
        x = 5; y = 0;
    }
    sum = x + y;       // sum cannot be 0
    result = 10 / sum; // no div. by 0
    return result;
}
// Commands
// frama-c -val div2.c -main f
// aka frama-c -eva div2.c -main f
// aka frama-c -eva div2.c -main f -slevel 1
// for correctness
// frama-c -eva div2.c -main f -slevel 2