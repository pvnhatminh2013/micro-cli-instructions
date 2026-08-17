#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Wrong number of arguments.\n");
    }
    clock_t t;
    t = clock();
    system(argv[1]);
    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC; 
    printf("%f\n", time_taken); 
    return 0;
}
