/*@ requires 1 <= id <= UINT_MAX;
    assigns id;
    behavior somewhere_in_the_middle:
        assumes 1 <= \old(id) < UINT_MAX;
        ensures id == \old(id) + 1 &&
                strcmp(\result, strcat("BLOCK\0",
                                        ltoa(\old(id)))) == 0;
    behavior too_many_blocks:
        assumes \old(id) == UINT_MAX;
        ensures \result == NULL;
    complete behaviors somewhere_in_the_middle, too_many_blocks;
    disjoint behaviors somewhere_in_the_middle, too_many_blocks;
*/
char* getBlockID();