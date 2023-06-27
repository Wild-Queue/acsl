#include <stddef.h>
/*@
    requires \valid(a+(0..n-1));

    assigns  a[0..n-1];

    ensures
    \forall integer i;
        0 <= i < n ==> a[i] == 0;
*/
void set_to_0(int* a, size_t n){
    size_t i;

    /*@
        loop invariant 0 <= i <= n;
        loop invariant
        \forall integer j;
            0 <= j < i ==> a[j] == 0;
        loop assigns i, a[0..n-1];
        loop variant n-i;
    */
    for(i = 0; i < n; ++i)
        a[i] = 0;
}


/*
ACSL_START
    requires \valid(a+(0..n-1));

    assigns  a[0..n-1];

    ensures
    \forall integer i;
        0 <= i < n ==> a[i] == 0;
ACSL_END
void set_to_0(int* a, size_t n){
    size_t i;

    ACSL_START
        loop invariant 0 <= i <= n;
        loop invariant
        \forall integer j;
            0 <= j < i ==> a[j] == 0;
        loop assigns i, a[0..n-1];
        loop variant n-i;
    ACSL_END
    for(i = 0; i < n; ++i)
        a[i] = 0;
}



ACSL(1);
void set_to_0(int* a, size_t n){
    size_t i;

    ACSL(2);
    for(i = 0; i < n; ++i)
        a[i] = 0;
}
*/