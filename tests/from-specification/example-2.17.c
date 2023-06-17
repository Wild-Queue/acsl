struct long_st { int x1, y2; };
struct st { char x, y; };

//@ ensures \result == (struct st) s;
struct st from_long_st(struct long_st s)
{
    return *(struct st *)&s;
}