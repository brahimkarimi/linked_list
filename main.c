#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


int main(){



list *l ;
    creat_list();creat_node(1);
    add_first(&l,2);
    add_first(&l,3);
    add_first(&l,4);
    add_first(&l,5);
    display_list(&l);
    Max_node_list(l);  
return 0 ;
}