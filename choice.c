#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("Wrong number of arguments.\n");
        return 1;
    }
    char ch;
    do {
        printf("\n%s[y/n]? ", argv[1]);
    }
    while (scanf(" %c", &ch) == 1 && ch != 'y' && ch != 'n' && ch != 'Y' && ch != 'N');
    printf("\n");
    if (ch == 'y' || ch == 'Y') {
        system(argv[2]);
    }
    else {
        system(argv[3]);
    }
}
