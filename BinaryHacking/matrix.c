#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if (argc == 2) {
		printf("Knock, knock, %s\n", argv[1]);
	} else {
		fprintf(stderr, "Usage: %s <name>\n", argv[0]);
		return 1;
	}
	return EXIT_SUCCESS;
}
