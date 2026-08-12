#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
int main(int argc, char *argv[]) {
	if (argc <= 2) {
		perror("Not enough arguments.");
		return 1;
	}
	if (mkdir(argv[1], 0777) == -1) {
		perror("Error creating directory.\n");
		return 1;
	}
	return 0;
}
