#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//note
int arms = 0;
int legs = 1;
int ab = 2;
int back = 3;

int mus_group_sort(int typ) {
    if(typ == arms) {
        printf("arms\n");
        return arms;
    }
    if(typ == legs){
        printf("legs\n");
        return legs;
    }
    if(typ == ab){
        printf("abs\n");
        return ab;
    }
    if(typ == back){
        printf("back\n");
        return back;
    }
    
}
int reps_get(int typ){
    int p_ups = 20;
    int lunges = 20;
    int sit_ups = 20;
    int chin_ups = 20;
    if(typ == arms){
        printf("push ups = %d\n", p_ups);
        return p_ups;
    }
    if(typ == legs){
        printf("lunges = %d\n", lunges);
        return lunges;
    }
    if(typ == ab){
        printf("sit_ups = %d\n", sit_ups);
        return sit_ups;
    }
    if(typ == back){
        printf("chin_ups = %d\n", chin_ups);
        return chin_ups;
    }
}

int main(void) {
    srand(time(NULL));
    while(1){
        int randy = rand() % 4;
            //printf("%d", randy);
    
        int mus_group = mus_group_sort(randy);
        int reps = reps_get(randy);
        // put function here that posts the results in a document(later sql)
        // function that gives bad luck protection
        // make these exercise values into a struct
        char *reps_done;
        //
        scanf("Number completed = %s", reps_done);
    }
    return 0;
}
