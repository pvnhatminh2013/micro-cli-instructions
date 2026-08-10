#include <stdio.h>
int main(int argc, char *argv[]) {
	if (argc <= 1) {
		printf("Not enough arguments.\n");
		return 1;
	}
	for (int i = 1; i < argc; i++) {
		char *file = argv[i];
		if (remove(file) != 0) {
			printf("Can't remove %s.\n", file);
		}
	}
	return 0;
}
