struct memb {
    unsigned short size;
    unsigned short num;
    char *count;
    void *mem;
};

void *memb_alloc(struct memb *m)
{
    int i;

    for(i = 0; i <m->num; ++i) {
        if(m->count[i] ==0) {
            m->count[i] = 1 ;
            int loc = i * m->size ;
            return (void *)((char *)m->mem + loc);
        }
    }

    return NULL;
}