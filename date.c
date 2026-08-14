#include <stdio.h>
#include <time.h>
int main() {
	time_t currentTime;
	time_t error = -1;
	if (time(&currentTime) == error) {
		perror("Failed to get the current time.");
		return 1;
	}
	printf("%s", ctime(&currentTime));
	return 0;
}
