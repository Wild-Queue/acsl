// Not working
int fact(int n) {
  int r = 1 ;
  while ( n > 0 ) {
    //@ assert n > 0 ;
  before:
    r *= n-- ;
    //@ assert r == \at(r*n,before) ;
  }
  return r ;
}
