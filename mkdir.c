#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
int main(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++) {
		if (mkdir(argv[i], 0777) == -1) {
			perror("Error creating directory.");
			continue;
		}
	}
	return 0;
}
