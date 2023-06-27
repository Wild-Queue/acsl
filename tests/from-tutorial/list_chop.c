#include "limits.h"
#include "stdlib.h"

struct list
{
    struct list *next;
    int value;
};

/*@
    logic int length_aux{L}(struct list * l,
                                    int n)=
        n <(int)0 ? ((int)-1) :
                l == NULL ? n :
                    n < INT_MAX ?
                        length_aux(l->next, (int)(1+n)) :
                            ((int)-1);

    logic int length{L}(struct list * l) =
        length_aux(l, (int)0);
*/

/*@
    requires \valid(list);
    requires 0 ≤ length(*list);
*/
struct list * list_chop(struct list ** list){
    struct list *l, *r;
    if(*list ==NULL) {
        return NULL;
    }

    if((*list)->next ==NULL) {
        l = *list;
        *list = NULL;
        return l;
    }

    l = *list;
    while(l->next->next 6=NULL){
        l = l->next;
    }
    r = l->next;
    l->next = NULL;
    return r;
}

int main(void){
    struct list node;
    node.value = 1;
    node.next = &node;
    
    struct list * l = &node;
    
    l = list_chop(&l);
}