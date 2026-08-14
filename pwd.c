#include <unistd.h>
#include <stdio.h>
int main() {
  	char cwd[4096];
  	if (getcwd(cwd, sizeof(cwd)) != NULL) {
    	printf("%s\n", cwd);
	} 
	else {
    	perror("getcwd() error");
   		return 1;
	}
	return 0;
}
