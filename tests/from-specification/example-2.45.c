/*@ logic integer max_index{L}(int t[],integer n) =
  @ (n==0) ? 0 :
  @ (t[n-1]==0) ? n-1 : max_index(t, n-1);
  @*/