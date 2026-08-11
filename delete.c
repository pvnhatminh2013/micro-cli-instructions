#include <stdio.h>
int main(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++) {
		char *file = argv[i];
		if (remove(file) != 0) {
			printf("Can't remove %s.\n", file);
		}
	}
	return 0;
}
