#include <stdio.h>
int main(int argc, char *argv[]) {
	if (argc != 3) {
		perror("Wrong number of elements.");
		return 1;
	}
	int value = rename(argv[1], argv[2]);
	if (value) {
		perror("Error with renaming the file.\n");
	}
	return 0;
}
