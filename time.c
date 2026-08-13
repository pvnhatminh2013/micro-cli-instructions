#include <stdio.h>
#include <time.h>
#include <sys/time.h>
int main() {
	time_t now;
	struct tm ts;
	char buffer[128];
	time(&now);
	ts = *localtime(&now);
	strftime(buffer, sizeof(buffer), "%H:%M:%S", &ts);
	printf("Current time is: %s\nEnter new time: ", buffer);
	int new_hour;
	int new_minute;
	int new_second;
	if (scanf("%d:%d:%d", &new_hour, &new_minute, &new_second) != 3) {
		printf("Invalid time.\n");
		return 1;	
	}
	else {
		if (new_hour >= 24 || new_minute >= 60 || new_second >= 60) {
			printf("Invalid time.\n");
			return 1;
		}
		else if (new_hour < 0 || new_minute < 0 || new_second < 0) {
			printf("Invalid time.\n");
			return 1;
		}
	}
	ts.tm_hour = new_hour;
	ts.tm_min = new_minute;
	ts.tm_sec = new_second;
	struct timeval set_time;
	set_time.tv_sec = mktime(&ts);
	set_time.tv_usec = 0;
	int rc = settimeofday(&set_time, NULL);
	if (rc != 0) {
		printf("Setting the time failed.");
	}
	printf("\n");
	return 0;
}
