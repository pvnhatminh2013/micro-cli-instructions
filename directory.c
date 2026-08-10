#include <stdio.h>
#include <dirent.h>
int main() {
	struct dirent *entry;
	DIR *dir = opendir(".");
	if (dir == NULL) {
		printf("Cannot open directory.\n");
	    return 1;
	}
	int count = 0;
	while ((entry = readdir(dir)) != NULL) {
		if (count < 2) {
			count++;
			continue;
		}
		printf("%s    ", entry->d_name);
	}
	closedir(dir);
	return 0;
}
