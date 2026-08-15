#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    if (argc != 3) {
        perror("Wrong number of arguments");
        return 1;
    }
    FILE *f1 = fopen(argv[1], "r");
    FILE *f2 = fopen(argv[2], "r");
    if (f1 == NULL || f2 == NULL) {
        perror("Error opening file");
        return 1;
    }
    char line1[300], line2[300];
    int lineNum = 0, diffFound = 0;
    while (1) {
        char *res1 = fgets(line1, sizeof(line1), f1);
        char *res2 = fgets(line2, sizeof(line2), f2);
        lineNum++;
        if (ferror(f1) || ferror(f2)) {
            perror("Error reading from file");
            fclose(f1);
            fclose(f2);
            return 1;
        }
        if (res1 == NULL && res2 == NULL) {
            break;
        }
        if (res1 == NULL || res2 == NULL || strcmp(line1, line2) != 0) {
            printf("Line %d:\n", lineNum);
            if (!strchr(line1, '\n')) {
                printf("%s: %s\n", argv[1], (res1 ? line1 : ""));
            }
            else {
                printf("%s: %s", argv[1], (res1 ? line1 : "\n"));
            }
            if (!strchr(line2, '\n')) {
                printf("%s: %s\n", argv[2], (res2 ? line2 : ""));
            }
            else {
                printf("%s: %s", argv[2], (res2 ? line2 : "\n"));
            }
            diffFound = 1;
        }
        printf("-------\n");
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
