unsigned max_runs = 0;

//@ terminates max_runs > 0 ;
void main_loop(void)
{
    /*@ terminates \true ; */ {
        initialize_memory();
        //@ loop variant n ;
        for (unsigned n = 10; n > 0; n--)
            initialize_device(n - 1);
    }

    unsigned runs = 0;
    //@ loop variant max_runs - runs ;
    while (1)
    {
        if (max_runs != 0 && runs >= max_runs)
            break;
        runs++;

        //@ terminates \true ;
        handle_events();
    }
}