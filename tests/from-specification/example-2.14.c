struct S { int x; float y; int t[10]; };
//@ logic integer f( struct S s) = s.t[3];
//@ logic struct S g(integer n, struct S s) = { s \with .x = (int)n };