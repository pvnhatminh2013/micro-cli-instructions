#include <stdio.h>
int main(int argc, char *argv[]) {
	FILE *fptr;
	for (int i = 1; i < argc; i++) {
		fptr = fopen(argv[i], "r");
		if (fptr == NULL) {
			printf("---\nError accessing file %s.\n---\n", argv[i]);
			continue;
		}
		char buffer[1024];
		size_t n;
		while ((n = fread(buffer, sizeof(char), sizeof(buffer) - 1, fptr)) > 0) {
			buffer[n] = '\0';
			printf("%s", buffer);
		}
		fclose(fptr);
	}
	return 0;
}
