#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//note
int arms = 0;
int legs = 1;

int mus_group_sort(int typ) {
    if(typ == arms) {
        printf("arms/n");
        return arms;
    }
    if(typ == legs){
        printf("legs/n");
        return legs;
    }
    
}


int main(void) {
    srand(time(NULL));
    int randy = rand() % 2;
    printf("%d", randy);
    
    int mus_group = mus_group_sort(randy);
    
    return 0;
}
