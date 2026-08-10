#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 1024
int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Wrong number of arguments.\n");
		return 1;
	}
	char *source_format = strchr(argv[1], '.');
	char *destination_format = strchr(argv[2], '.');
	if (source_format == NULL || destination_format == NULL) {
		printf("Invalid file format.\n");
		return 1;
	}
	if (strcmp(source_format, destination_format) != 0) {
		printf("File formats are different.\n");
		return 1;
	}
	FILE *source = fopen(argv[1], "rb");
	FILE *destination = fopen(argv[2], "wb");
	if (source == NULL || destination == NULL) {
		printf("Can't open source file.\n");
		return 1;
	}
	char buffer[BUFFER_SIZE];
	size_t bytes_read;
    while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, source)) > 0) {
    	fwrite(buffer, 1, bytes_read, destination);
   	}
	fclose(source);
	fclose(destination);
	return 0;
}
